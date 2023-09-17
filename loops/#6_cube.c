/*
==============================  Cube of a number  =================================

Problem statement : Write a C program to display the cube of the number up to an integer

======================================================================================

Sample Input :  5

Sample Output : Number is : 1 and the cube of 1 is : 1
                Number is : 2 and the cube of 2 is : 2
                Number is : 3 and the cube of 3 is : 3
                Number is : 4 and the cube of 4 is : 4
                Number is : 5 and the cube of 5 is : 5

Explanation : 
=====================================================================================
*/

#include<stdio.h>
int main()
{
	int i,n;
	printf("\n\t\t ENTER THE INTEGER:");
	scanf("%d",&n);
    for(i=1;n>=i; i++)
	{
	    printf("\n\t\t THE NUMBRE IS: %d AND CUBE  OF THE %d IS:%d",i,i,(i*i*i));
	}
	return 0;
}