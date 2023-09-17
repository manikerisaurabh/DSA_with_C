/*
==============================  Fibonacci using loop =================================

Problem statement : Write a C program to display n terms of the Fibonacci Series 
                    the series is as follows
                    0,1,1,2,3,5,8,13,.....

======================================================================================

Sample Input :  10

Sample Output : 0,1,1,2,3,5,8,13

Explanation : 
=====================================================================================
*/




#include<stdio.h>
int main()
{
	int n;
	int a=0, b=1;
	printf("Enter number :");
	scanf("%d",&n);
	printf("Fibonacci Series of first %d no is :  ",n);
	if(n <= 1) {
		printf("%d",a);
		return 0;
	}
	if(n == 2) {
		printf("%d %d ",a,b);
		return 0;
	}
	int next = a+b;
	printf("%d, %d, ",a,b);
	for(int i=3; i<=n; i++) {
		printf("%d, ",next);
		a = b;
		b = next;
		next = a+b;
	}
	return 0;

}
