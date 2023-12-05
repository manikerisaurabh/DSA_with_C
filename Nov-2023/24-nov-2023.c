/*
============================== SEPERATE NEGATIVE AND POSITOVE  =================================

Problem statement : Given an array containig negative and positive numbers 
                    task : place all the negative numbers to end

======================================================================================

Sample Input :  a[] = {1,-1,3,2,-7,-5,11,6}

Sample Output : a[] = {1,3,2,11,6,-1,-7,-5}

Explanation : 
=====================================================================================
*/


#include<stdio.h>
int main()
{
    int size,i;
    printf("Enter the size of an array :");
    scanf("%d",&size);
    int arr[size];
    printf("Enter you array elements :");
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    for ( i = 0; i < size; i++)
    {
        if(arr[i]>0)
        {
            printf("%d\t",arr[i]);
        }
        if (arr[i]==0)
        {
            printf("%d\t",arr[i]);
        }
    }
    for ( i = 0; i < size; i++)
    {
        if(arr[i]<0)
        {
            printf("%d\t",arr[i]);
        }
    }
    return 0;
}