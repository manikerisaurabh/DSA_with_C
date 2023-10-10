/*
==============================  array operation =================================

Problem statement : Write a C program to add some elements to array and display them

======================================================================================

Sample Input :  size of array : 5

Sample Output : entered element : 1 2 3 4 5

Explanation : 
=====================================================================================
*/

#include<stdio.h>
int main()
{
  int n;
  printf("Enter the size of array : ");
  scanf("%d",&n);
  int a[n];
  printf("Enter %d elements in array : ",n);
  for(int i=0; i<n; i++) {
    scanf("%d",&a[i]);
  }

  printf(" %d elements from array are : ",n);
  for(int i=0; i<n; i++) {
    printf("%d ",a[i]);
  }
  
  return 0;
}