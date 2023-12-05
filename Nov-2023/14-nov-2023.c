/*
============================== FIND TRIPLETS =================================

Problem statement : Given an array and integr X. Find if there is a triplet
                    in the array which sums up to the given integer X

======================================================================================

Sample Input :  a[] = {12,,4,1,6,9}  X = 24

Sample Output : 12,3,9

Explanation : 
=====================================================================================
*/




#include<stdio.h>
void threeSum(int a[], int len, int tar) {
  if(len < 3) {
    printf("not found!!");
    return;
  }
  if(len == 3) {
    if(a[0]+a[1]+a[2] == tar) {
      printf("indices are [0,1,2]");
    } else {
      printf("Not found!!");
      return;
    }
  }
  for(int i=0; i<len-2; i++) {
    for(int j=i+1; j<len-1; j++) {
      for(int k=j+1; j<len; j++) {
        int sum = a[i]+a[j]+a[k];
        if(sum == tar) {
          printf("indices are [%d, %d, %d]",i,j,k);
          return;
        }
      }
    }
  }
  printf("Not Found!!");
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
  threeSum(a,n,tar);
  return 0;
}