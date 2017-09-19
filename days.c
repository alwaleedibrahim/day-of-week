/*
*Discription:Program that determine what day is it in a specific date.
*@Author: Alwaleed Ibrahim
*@Date: 19/9/2017
*/
#include <stdio.h>
int main(void) {
	printf("Hello! This program will show you what day is it in a specific date.\n");
	printf("Please enter in the range between 1/1/1900 - 31/12/2200.\n(DD/MM/YYYY):");
	int d, m ,y;
	//initial date is Monday 1/1/1900, the program will count up to date given by the user 
	int dd = 1, mm = 1, yy = 1900;
	int day = 2;
	//sacn user input
	scanf("%d/%d/%d", &d, &m, &y);
	//check for leap year
	int leap = 0;
	if (y%4==0 && (y%100!=0 || y%400==0)) {
		leap = 1;
	}
	//check user input, and return 1 if input is invalid
	if ( (d>31||d<1)||(m>12||m<1)||(y>2200||y<1900)||(m==2&&(d>29||(!leap &&d>28)))||((m==4||m==6||m==9||m==11)&&(d>30)) ) {
		fprintf(stderr, "Invalid date!\n");
		return 1;
	}
	char *days[7];
	days[0] = "Saturday";
	days[1] = "Sunday";
	days[2] = "Monday";
	days[3] = "Tuesday";
	days[4] = "Wednesday";
	days[5] = "Thursday";
	days[6] = "Friday";
	
	//itrate over every day up to input date
	while (yy<2200) {
		//check if current date is same as input date
		if (dd==d && mm==m && yy==y) {
			printf("%s!\n", days[day]);
			return 0;
		}
		//increment month day and week day
	 	dd++;
	 	day++;
	 	//check if the the current year is leap
	 	int leap = 0;
	 	if (yy%4==0 && (yy%100!=0 || yy%400==0)) {
	 	 	leap = 1;
	 	}
	 	//if reaches the end of the week, return to the first day
	 	if (day == 7) {
	 		day =0;
	 	}
	 	//months that have 31 days
		if ((mm==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==12) && dd>31) {
			dd=1;
			mm++;
		}
		//months that have 30 days
		else if ((mm==4 || mm==6 || mm==9 || mm==11) && dd>30) {
			dd=1;
			mm++;
		}
		//2nd month has a special rule. It has 29 days in leap year and 28 in non leap year
		else if (mm==2) {
			if (leap && dd>29) {
				dd=1;
				mm++;
			}
			else if (!leap && dd>28) {
				dd=1;
				mm++;
			}
		}
		//if months count is higher than 12, return to 1 and increment year
		if (mm>12) {
			mm=1;
			yy++;
		}
	}
	//if the input passes the while loop without being checked, return error
	//i suppose that this line will never be executed, unless there is an unexpected bug in the code 
	fprintf(stderr, "Error!\n");
	return 2;
}
