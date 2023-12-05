/*
==============================0s, 1s, 2s array =================================

Problem statement : Write a C program to sort an array of 0s, 1s, 2s

======================================================================================

Sample Input :  a[] = {0,1,2,2,1,0,0,2,0,1,1,0}

Sample Output : a[] = {0,0,0,0,0,0,1,1,1,1,2,2,2}

Explanation : 
=====================================================================================
*/

#include<stdio.h>
int main()
{
	int i,j,n;
	printf("\n\t\tHow many elements you want to enter: ");
	scanf("%d",&n);
	int a[n];
	printf("\n\t\tEnter %d elements of array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\n\t\tARRAY BEFORE SORTING: ");
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}
	
	int temp=0;
	for(i=1;i<=n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[j]>a[i])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}			
		}
		
	}
	
	printf("\n\t\tARRAY AFTER SORTING: ");
	
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}
}