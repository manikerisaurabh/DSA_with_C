/*
==============================  LCM of two numbers =================================

Problem statement : Write a C program to find LCM of two numbers 

======================================================================================

Sample Input :  first number : 12
                last number : 30

Sample Output : LCM : 60

Explanation : 
=====================================================================================
*/

#include<stdio.h>
int main()
{
	int a,b,max;
	printf("Enter two numbers : ");
	scanf("%d%d",&a,&b);
	max = (a>b) ? a : b;
	while(1) {
		if((max%a == 0) && (max%b == 0)) {
			printf("%d is the LCM of %d and %d ",max,a,b);
			break;
		}
		max++;
	}
		return 0;
}