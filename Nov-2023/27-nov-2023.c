/*
============================== NUMBER OG INVERSIONS =================================

Problem statement : Given an array arr of size N containing all disticnt 
                    numbers find the total number of inverisons that may exits

======================================================================================

Sample Input :  a[] = {3,2,1}

Sample Output : 3

Explanation : 
=====================================================================================
*/


#include<stdio.h>
int totalInversion(int a[], int n) {
  int count=0;
  for(int i=0; i<n-1; i++) {
    for(int j=i+1; j<n; j++) {
      if(a[i] > a[j]) {
        printf("[%d,%d]\n",a[i], a[j]);
        count++;
      }
    }
  }
  return count;
}
int main(int argc, char const *argv[])
{
  int n;
  printf("Enter size of array : ");
  scanf("%d",&n);
  int a[n];
  printf("enter %d numbers in array ",n);
  for(int i=0; i<n; i++) {
    scanf("%d",&a[i]);
  }
  printf("total inversion : %d ",totalInversion(a,n));
  return 0;
}