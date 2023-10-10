/*
==============================  Sum of array =================================

Problem statement : Write a C program to calculate sum of all the elements in array

======================================================================================

Sample Input :  array = [1,2,3,4,5]

Sample Output : sun=15

Explanation : 
=====================================================================================
*/

#include<stdio.h>
int main()
{
  int n;
  printf("Enter the size of array  : ");
  scanf("%d",&n);
  int a[n];
  printf("Enter %d elements in  array  : ",n);
  int sum=0;
  for(int i=0; i<n; i++) {
    scanf("%d",&a[i]);
    sum+=a[i];
  }
  printf("the total sum is %d ",sum);
}
