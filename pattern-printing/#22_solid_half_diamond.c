/*
==============================  SOLID HALF DIAMOND =================================

Problem statement : Write a C program to print solid half diamond pattern

======================================================================================

Sample Input :  height of diamond = 9

Sample Output : 
                *
                * *
                * * *
                * * * * 
                * * * * * 
                * * * *
                * * *
                * *
                * 

Explanation : 
=====================================================================================
*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the row number : ");
    scanf("%d",&n);
    n = (n/2)+1;
    for(int i=0; i<n; i++) {
        for(int j=0; j<i; j++) {
        printf("* ");
        }
        printf("\n");
    }
    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
        printf("* ");
        }
        printf("\n");
    }
    return 0;
}