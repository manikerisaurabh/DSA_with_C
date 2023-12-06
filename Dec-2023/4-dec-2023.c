/*
============================== COMPLETE SUM =================================

Problem statement : Given an array Arr of size N
                    return the Arr2 which is complete sum of Arr

======================================================================================

Sample Input :  a[] = {1,2,3}

Sample Output : completeSum[] = {1,3,6}

Explanation : 
=====================================================================================
*/


#include<stdio.h>
void completeSum(int a[], int n) {
  int b[n];
  int sum=0;
  for(int i=0; i<n; i++) {
    sum+=a[i];
    b[i] = sum;
  }
  printf("Ans is : ");
  printArr(b,n);
}

void printArr(int a[], int n) {
  for(int i=0; i<n; i++) {
    printf("%d ",a[i]);
  }
}
int main(int argc, char const *argv[])
{
  int n;
  printf("Enter the size of array : ");
  scanf("%d",&n);
  int a[n];
  printf("Enter %d elelments in array : ",n);
  for(int i=0; i<n; i++) {
    scanf("%d",&a[i]);
  }
  completeSum(a,n);
  return 0;
}
