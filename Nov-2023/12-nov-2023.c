/*
============================== MERGE TOW ARRAY'S  =================================

Problem statement : Given to Sorted arrys Merge them without using extra space

======================================================================================

Sample Input :  n=4 arr1[] = {1,3,5,7}
                m=5 arr2[] = {0,2,6,8,9}

Sample Output : arr1[] = {0,1,2,3}
                arr2[] = {5,6,7,8,9}

Explanation : 
=====================================================================================
*/


#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter size of first array : ");
  scanf("%d",&a);
  int a1[a];
  printf("Enter first array ");
  for(int i=0; i<a; i++) {
    scanf("%d",&a1[i]);
  }
  printf("Enter size of second array : ");
  scanf("%d",&b);
  int a2[b];
  printf("Enter first array ");
  for(int i=0; i<b; i++) {
    scanf("%d",&a2[i]);
  }
  int j, end;
  for (int i = b - 1; i >= 0; i--) {
        end = a1[a - 1];
        for (j = a - 2; j >= 0 && a1[j] > a2[i]; j--) {
          a1[j + 1] = a1[j];
        } 
        if (end > a2[i]) {
            a1[j + 1] = a2[i];
            a2[i] = end;
        }
    }
  printf("Sorted Arrays are  : \n");
  printf("first array : ");
  for(int k=0; k<a; k++) {
    printf("%d ",a1[k]);
  }
  printf("second array : ");
  for(int k=0; k<b; k++) {
    printf("%d ",a2[k]);
  }
}