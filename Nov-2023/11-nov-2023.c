/*
============================== minimum difference=================================

Problem statement : Given an array denoting height of N tower
                    for rach tower u must perform exact one task
                        1) Increse the height of tower by k
                        2) Decrease the height of tower by k

                    find the minimum possible difference betweent the height of
                    tallest tower and shortest tower

======================================================================================

Sample Input :  k=2 N=4
                a[] = {1,5,8,10}

Sample Output : 5

Explanation : 
=====================================================================================
*/


#include<stdio.h>
void swap(int* xp, int* yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
void sort(int arr[], int n) 
{ 
    int i, j, min_idx; 
    for (i = 0; i < n - 1; i++) { 
        min_idx = i; 
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j; 
            }
        }
        swap(&arr[min_idx], &arr[i]); 
    } 
} 

void printArray(int arr[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) {
      printf("%d ", arr[i]);
    }
         
} 

int findDiff(int a[], int n) {
  int min=a[0];
  int max=a[0];
  for(int i=0; i<n; i++) {
    if(a[i] > max) {
      max = a[i];
    }
    if(a[i]<min) {
      min = a[i];
    }
  }

  return (max-min);
}

int getMinDiff(int a[] ,int n, int k) {
  for(int i=0; i<n; i++) {
    if(a[i]>=k) {
      a[i]-=k;
    } else {
      a[i]+=k;
    }
  }
  printf("\n THE ARRAY AFTER OPERATIONS  : ");
  printArray(a,n);
  int ans = findDiff(a,n);
  return ans;
}
int main()
{
  int n;
  printf("Enter the size of array : ");
  scanf("%d",&n);
  int a[n];
  printf("Enter array elements : ");
  for(int i=0; i<n; i++) {
    scanf("%d",&a[i]);
  }
  int k;
  printf("ENter the value for incre or decre : ");
  scanf("%d",&k);
  printf("\n ORIGINAL ARRAY IS : ");
  printArray(a,n);
  sort(a,n);
  printf("\n the diff is : %d ",getMinDiff(a,n, k));
}