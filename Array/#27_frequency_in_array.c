/*
==============================  FREQUENCY IN ARRAY =================================

Problem statement : Write a C program to count the frequency of 
                    particular element in array
                Note: Given array is inn sorted manner

======================================================================================

Sample Input :  Arr[] = [9,8,8,5,4,1,1,1]

Sample Output : 9 repeated for 1 time
                8 repeated for 2 time
                5 repeated for 1 time
                4 repeated for 1 time
                1 repeated for 3 time

Explanation : 
=============================8========================================================
*/

#include<stdio.h>
int main()
{
  int n;
  printf("Enter the size of array : ");
  scanf("%d",&n);
  int a[n];
  printf("Enter %d element in sorted manner : ",n);
  for(int i=0; i<n; i++) {
    scanf("%d",&a[i]);
  }

  int temp=a[0];
  int count=0;
  for(int i=0; i<n; i++) {
    if(a[i] == temp) {
      count++;
    } else {
      printf("%d repeated %d times \n",temp,count);
      count=1;
      temp=a[i];
    }
    if(i==n-1) {
      printf("%d repeated %d times \n",temp,count);
    }
  }
}