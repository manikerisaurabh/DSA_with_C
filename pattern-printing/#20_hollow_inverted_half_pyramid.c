/*
==============================  Hollow Inverted Half Pyramid =================================

Problem statement : Write a C program to print Hollow Inverted 
                    Half Pyramid
                    Height of the pyramid should be taken from
                    user

======================================================================================

Sample Input :  Height : 4

Sample Output : 
                * * * * 
                *   *
                * *
                * 

Explanation : 
=====================================================================================
*/


#include<stdio.h>
int main()
{
    int r;
    printf("ENTER THE HEIGHT OF TRIANGLE :");
    scanf("%d",&r);
    for(int i=1; i<=r; i++) {
        for(int j=i; j<=r; j++) {
            if(i==1 || j==i || j==r) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}