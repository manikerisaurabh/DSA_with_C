/*
==============================  Hollow Square =================================

Problem statement : Write a C program to print outline or boundary of square 
                    pattern by star character
                    You must take side of a square as input

======================================================================================

Sample Input :  5

Sample Output : 
                * * * * *
                *       *
                *       *
                *       *
                * * * * * 
Explanation : 
=====================================================================================
*/


#include<stdio.h>
int main()
{
	int side;
	printf("Enter the side of square : ");
	scanf("%d",&side);
	for(int i=0; i<side; i++) {
		for(int j=0; j<side; j++) {
			if(i==0 || i==side-1 || j==0 || j==side-1) {
				printf("* ");
			} else {
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}
