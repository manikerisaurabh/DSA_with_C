/*
==============================  Addition of first and last digit  =================================

Problem statement : Writ a C program to input a number and find sum of firs and last digit

======================================================================================

Sample Input :  12566

Sample Output : 7

Explanation : first no : 1
            last no : 6
            Additon : 7
=====================================================================================
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() 
{
    char str[100];
    printf("Enter number : ");
    gets(str);
    printf("The number is : ");
    puts(str);
	char last = str[strlen(str)-1];
	char first,ans;
	int count=0;
	if(str[0] == '-') {
		first = str[1];
		count++;
	} else {
		first = str[0];
	}
	int f = first-48;
	int l = last-48;
	if(f == 0) {
		printf("Addition is   %d ",l);
		return 1;
	}
	if(count == 1) {
		if(f>l) {
			ans = l-f;
			printf("Addition is   %d ",ans);
		} else {
			ans = f-l;
			printf("Addition is  else %d ",ans);
		}
	} else {
		ans = l+f;
		printf("Addition is   %d ",ans);
	}
    return 0;
}