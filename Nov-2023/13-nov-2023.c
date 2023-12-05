/*
==============================  =================================

Problem statement : Given an array and target return the two 
                    index wich addition gives target

======================================================================================

Sample Input :  a[] = {2,7,11,15} target = 9

Sample Output : [0,1]

Explanation : 
=====================================================================================
*/



#include<stdio.h>
void towSum(int a[], int len, int tar) {
  for(int i=0; i<len; i++) {
    for(int j=i+1; j<len; j++) {
      if(a[i]+a[j] == tar) {
        printf("index are [%d, %d]",i,j);
        return;
      }
    }
  }
  printf("not faound!");
}
int main() {
  int n;
  printf("Enter size of array : ");
  scanf("%d",&n);
  int a[n];
  printf("Enter array elements : ");
  for(int i=0; i<n; i++) {
    scanf("%d",&a[i]);
  }
  int tar;
  printf("Enter target : ");
  scanf("%d",&tar);
  towSum(a,n,tar);
  return 0;
}