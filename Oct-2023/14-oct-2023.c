/*
============================== PAIR OF GIVEN SUM =================================

Problem statement : Write a C program to find a pair with given sum in the array

======================================================================================

Sample Input :  6 8 4 -5 7 9

Sample Output : 15

Explanation : 
=====================================================================================
*/
#include<stdio.h>
void main()
{
	int n,sum=0,i,j;
	printf("How many elements you want ot enter: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter %d elements of array: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter sum: ");
	scanf("%d",&sum);
	
	int result=0,flag=0;
	for(i=0;i<n;i++)
   	{
       for(j=1;j<=n;j++)
       {
            result=a[i]+a[j];
            if(result==sum)
      		{
       			printf("\n\t\t%d and %d elements of given array present at index %d and %d respectively have sum %d",a[i],a[j],i,j,sum);
       			flag=1;
       			break;
	   		}
	   		result=0;
       }
       
   	}
   	if(flag==0)
   	{
   		printf("No any element with given sum ");
	}
	
}