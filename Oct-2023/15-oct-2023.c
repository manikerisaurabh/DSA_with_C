/*
==============================  TRANSPOSE OF MATRIC=================================

Problem statement : Write a C program to find the transpose of a given matrix

======================================================================================

Sample Input :  a[][] = {{1,2}, {3,4}}

Sample Output : a[][] = {{1,3}, {2,4}}

Explanation : 
=====================================================================================
*/

#include<stdio.h>
int main()
{
	int i,j,r,c;
	printf("\n\t\tEnter number rows & columns in array: ");
	scanf("%d%d",&r,&c);
	
	int arr[r][c];
	printf("\n\t\tEnter total %d elements: ",r*c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);	
		}	
	}

	printf("\n\t\tOriginal Matrix: \n");
	for(i=0;i<r;i++)
	{
		printf("\n\t\t");
		for(j=0;j<c;j++)
		{
			printf("%5d ",arr[i][j]);
		}
		printf("\n");
	}

	int arr2[c][r];
	printf("\n\t\tTranspose OF Matrix: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			arr2[j][i]=arr[i][j];
		}
	}
	
	for(i=0;i<c;i++)
	{
		printf("\n\t\t");
		for(j=0;j<r;j++)
		{
			printf("%5d ",arr2[i][j]);
		}
		printf("\n");
	}
}