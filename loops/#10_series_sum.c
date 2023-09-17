/*
==============================  Sum  of Series =================================

Problem statement : Write a C program to find the sum of series 1+11+111+1111+....+n

======================================================================================

Sample Input :  5

Sample Output : 12345

Explanation : 1+11+111+1111+11111
=====================================================================================
*/

#include<stdio.h>
int main()
{
    int i=1,s,t=1,sum=0;
    
    printf("Enter number of series: ");
    scanf("%d",&s);
    
    while(i<=s)
    {
        printf("%d ",t);
        
        if(i<s)
        printf("+");
        
        sum=sum+t;
        t=(t*10)+1;
        
        i++;
    }
    
    
    printf("\nsum of entered term is: %d",sum);
}