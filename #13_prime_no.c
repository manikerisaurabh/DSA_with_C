/*
==============================  Prime number =================================

Problem statement : Write a C program to input a number and check whether the number is 
                    prime or not using loop

======================================================================================

Sample Input :  17

Sample Output : 17 is prime number

Explanation : 17 is only divisible by 1 & 17
=====================================================================================
*/

#include<stdio.h>
int main()
{
	int n,flag=0;
	printf("Enter a number : ");
	scanf("%d",&n);
	if(n==1 || n==0) {
		printf("%d is not a prime number ",n);
		return 0;
	}

	for(int i=2; i<=n/2; i++) {
		if(n%i == 0) {
			flag++;
			break;
		}
	}
	if(flag != 0) {
		printf("%d is not a prime number ",n);
	} else {
		printf("%d is a prime number ",n);
	}
	return 0;

}
