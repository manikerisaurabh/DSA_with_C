/*
============================== ROTATE THE ARRAY =================================

Problem statement : Given an array , rotate the array by one position in
                    clock-wise direction

======================================================================================

Sample Input :  a[] = {1,2,3,4,5}

Sample Output : a[] = {5,1,2,3,4}

Explanation : 
=====================================================================================
*/
#include<stdio.h>
void rotate(int a[], int n) {
  int first = a[n-1];
  for(int i=n-2; i > -1; i--) {
    a[i+1] = a[i];
  }
  a[0] = first;
}
int main() {
  int n;
  printf("Enter size of array : ");
  scanf("%d",&n);
  int a[n];
  printf("Enter %d elements in array : ",n);
  for(int i=0; i<n; i++) {
    scanf("%d",&a[i]);
  }
  rotate(a,n);
  printf("rotated array is : ");
  for(int i=0; i<n; i++) {
    printf("%d ",a[i]);
  }
}