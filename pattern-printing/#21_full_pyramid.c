/*
============================== FULL PYRAMID =================================

Problem statement : Write a C program to print Full Pyramid 
                    Hight of pyramid should be taken from the user

======================================================================================

Sample Input :  height of pyramid : 4

Sample Output : 
                   *
                  * *
                 * * *
                * * * * 

Explanation : 
=====================================================================================
*/

#include <stdio.h>
int main()
{
    int r;
    printf("Enter height of pyramid : ");
    scanf("%d",&r);
    for(int i=1;i<=r;i++)
    {
        for(int s=r-i;s>=1;s--)
        {
            printf(" ");
        }
        int  m=1;
        while(m<=i) {
            printf("* ");
            m++;
        }
    printf("\n");
    }
    return 0;
}