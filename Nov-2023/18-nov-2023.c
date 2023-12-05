/*
============================== IDENTICAL TWINS =================================

Problem statement : For an array return the number of identical twin

======================================================================================

Sample Input :  a[] = {1,2,3,2,1}

Sample Output : 2

Explanation : 
=====================================================================================
*/




#include<stdio.h>
int identicalTwin(int a[], int n) {
  int count=0;
  for(int i=0; i<n-1; i++) {
    for(int j=i+1; j<n; j++) {
      if(a[i] == a[j]) {
        count++;
      }
    }
  }
  return count;
}
int main()
{
  int n;
  printf("Enter size : ");
  scanf("%d",&n);
  int a[n];
  printf("Enter array elements : ");
  for(int i=0; i<n; i++) {
    scanf("%d",&a[i]);
  }
  printf(" number of Identical twins : %d",identicalTwin(a,n));
}