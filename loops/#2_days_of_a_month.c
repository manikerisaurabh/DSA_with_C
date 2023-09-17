/*
==============================  Days of a Month ==================================

Problem Statement : Write a C program to input a month number and 
                    print number of days in that days

--------------------------  sample I/O  ---------------------------------------
Input : 5
Output : 31

Explanation : 5th number month is May and May having 31 days

====================================================================================
*/

#include<stdio.h>
int main()
{
	int month;
	printf("Enter Month between 1 to 12 : ");
	scanf("%d",&month);
	
	if(month == 2) {
		int year;
		printf("Please enter year : ");
		scanf("%d",&year);
		if(year%4 == 0) {
			printf("%d is Leap year \nThere are 29 days in month %d",year,month);
		} else {
			printf("There are 28 days in month %d",month);
		}
		} else if((month<8) && (month%2 == 0)) {
			printf("There are 30 days in month %d",month);
		} else if((month<8) && (month%2 != 0)) {
			printf("There are 31 days in month %d",month);
		}else if((month>7) && (month%2 == 0)) {
			printf("There are 31 days in month %d",month);
		} else {
			printf("There are 30 days in month %d ",month);
		}
	return 0;
}