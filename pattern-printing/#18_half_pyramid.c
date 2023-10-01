/*
==============================  Half Pyramid =================================

Problem statement : Write a C program to print Half Pyramid of star(*)
                    you must take number of rows from user

======================================================================================

Sample Input :  5

Sample Output : 
                *
                * *
                * * *
                * * * *
                * * * * *

Explanation : 
=====================================================================================
*/


#include<stdio.h>
int main()
{
    int n,i,j;
    printf("ENTER THE ROWS:");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        for(j=1;j<=i;j++){
            printf("* ");
        } 
    printf("\n");
    }
    return 0;
}