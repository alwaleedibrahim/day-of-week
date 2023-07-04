Here is a possible readme.md file for your code:

# Day Of The Week Finder
This program determines what day of the week it is for a given date in the Gregorian calendar.

## Author
Alwaleed Ibrahim

## Date
19/9/2017

## Usage
To run the program, compile it with a C compiler and execute it. The program will prompt you to enter a date in the format DD/MM/YYYY, such as 01/01/2000. The date must be in the range between 1/1/1900 and 31/12/2200. The program will then print the corresponding day of the week, such as Saturday, or an error message if the input is invalid.

## Algorithm
The program uses a simple algorithm to find the day of the week. It starts from a known date, Monday 1/1/1900, and iterates over every day up to the input date, incrementing a counter that represents the day of the week. The counter cycles from 0 to 6, corresponding to Saturday to Friday. The program also checks for leap years and adjusts the number of days in February accordingly. The program uses an array of strings to store the names of the days of the week and prints the appropriate one based on the counter value.

## Example
Here is an example of running the program and entering a valid date:

```text
Hello! This program will show you what day is it in a specific date.
Please enter in the range between 1/1/1900 - 31/12/2200.
(DD/MM/YYYY):04/07/2023
Tuesday!
```

Here is an example of running the program and entering an invalid date:

```text
Hello! This program will show you what day is it in a specific date.
Please enter in the range between 1/1/1900 - 31/12/2200.
(DD/MM/YYYY):29/02/2021
Invalid date!
```
