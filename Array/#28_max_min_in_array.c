/*
==============================  min max from array =================================

Problem statement : Write a C program to find the minimum and maximum 
					element from the array

======================================================================================

Sample Input :  arr[] = [10,20,30,40]

Sample Output : minimum element : 10
				maximum element : 40

Explanation : 
=====================================================================================
*/
#include<stdio.h>
int main()
{
	int n;
	printf("Enter size : ");
	scanf("%d",&n);
	int a[n];
	for(int i=0; i<n; i++) {
		scanf("%d",&a[i]);
	}
	
	int min=a[0];
	int max=a[0];
	for(int i=1; i<n; i++) {
		if(a[i] > max) {
			max = a[i];
		} else if(a[i] < min) {
			min = a[i];
		}
	}
	printf("max : %d\n Min : %d",max,min);
}