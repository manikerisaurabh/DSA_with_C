/*
==============================  Duplicate count in array =================================

Problem statement : Write a C program to count the total number of duplicate elements

======================================================================================

Sample Input :  5 1 1 

Sample Output : 1

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
  int count=0;
  for(int i=0; i<n-1; i++) {
    for(int j=i+1; j<n; j++) {
      if(a[i] != -1) {
        if(a[i] == a[j]) {
          count++;
          a[j] = -1;
        }
      } 
    }
  }
  printf("this is count %d",count);
  
  return 0;
}
