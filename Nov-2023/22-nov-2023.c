/*
==============================  =================================

Problem statement : find the missing and rrepeated number from 1-N

======================================================================================

Sample Input :  N = 5
                a[] = {1,2,2,3,4}

Sample Output : missing = 5
                repeated = 2

Explanation : 
=====================================================================================
*/


#include<stdio.h>
void missingNo(int a[], int n, int temp[]) {
  int repeated = -1;
  for(int i=1; i<=n; i++) {
    if(temp[a[i]] == 0) {
      temp[a[i]] = 1;
    } else if(temp[a[i]] == 1) {
      repeated = a[i];
    }
  }
  int missing=-1;
  for(int i=1; i<=n; i++) {
    if(temp[i] == 0) {
      missing = i;
      
    }
  }
  printf("missing number = %d\n",missing);
  printf("repeated number = %d",repeated);
}
int main(int argc, char const *argv[])
{
  int n;
  printf("Enter the size of array : ");
  scanf("%d",&n);
  int a[n+1];
  int temp[n+1];
  printf("Enter elements into array from 1 to %d \n Condtion : only one element must be repeated at twice\n");
  for(int i=1; i<=n; i++) {
    scanf("%d",&a[i]);
    temp[i] = 0;
  }
  missingNo(a,n,temp);
  return 0;
}