/*
============================== MAX PRODUCT  =================================

Problem statement : Given an array with length 'N' (may includes positive, 
                    negative, zero) returnt the maximum product subarray

======================================================================================

Sample Input :  A[] = {6, -3, -10, 0, 2}

Sample Output : 180

Explanation : [6, -3, -10] product is : 180
=====================================================================================
*/


#include<stdio.h>

#include<math.h>
int maxProduct(int a[], int n) {
  int product=0;
  for(int i=1; i<n-1; i++) {
    int temp = 1;
    for(int j=0; j<i; j++) {
      temp = temp*abs(a[j]);
    }
    if(product<temp) {
      product = temp;
    }
  }
  return product;
}
int main(int argc, char const *argv[])
{
  int n;
  printf("Enter the size of array : ");
  scanf("%d",&n);
  int a[n];
  printf("Enter %d elements in array ",n);
  for(int i=0; i<n; i++) {
    scanf("%d",&a[i]);
  }
  printf("%d is the max sum",maxProduct(a,n));
  return 0;
}
