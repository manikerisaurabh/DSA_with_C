/*
==============================  Max Number of K-Sum Pairs  =================================

Problem statement : You are given an integer array nums and an integer k.

                    In one operation, you can pick two numbers from the array whose sum equals k and remove them from the array.

                    Return the maximum n umber of operations you can perform on the array.

======================================================================================

Sample Input :  Example 1:
                    Input: nums = [1,2,3,4], k = 5
                    Output: 2
                    Explanation: Starting with nums = [1,2,3,4]:
                    - Remove numbers 1 and 4, then nums = [2,3]
                    - Remove numbers 2 and 3, then nums = []
                    There are no more pairs that sum up to 5, hence a total of 2 operations.


                    Example 2:
                    Input: nums = [3,1,3,4,3], k = 6
                    Output: 1
                    Explanation: Starting with nums = [3,1,3,4,3]:
                    - Remove the first two 3's, then nums = [1,4,3]
                    There are no more pairs that sum up to 6, hence a total of 1 operation.




=====================================================================================
*/


#include<stdio.h>
int partition(int a[],int low,int high)
{
  int pivot=a[high];
  int i=(low-1);
  for(int j=low;j<=high;j++)
  {
    if(a[j]<pivot)
    {
      i++;
      int temp = a[i];
      a[i] = a[j];
      a[j] = temp;
    }
  }
  int temp = a[i+1];
      a[i+1] = a[high];
      a[high] = temp;
  return (i+1);
}

void quickSort(int a[],int low,int high)
{
  if(low<high)
  {     
    int pi=partition(a,low,high);
    quickSort(a,low,pi-1);
    quickSort(a,pi+1,high);
  }
}
   

int maxOperation(int a[], int n, int target) {
  int i=0,j=n-1, maxOp=0;
  while(i<j) {
    int sum=a[i]+a[j];
    if(sum<target) {
      i++;
    } else if(sum>target) {
      j--;
    } else {
      maxOp++;
      i++;
      j--;
    }
  }
  return maxOp;
}
int main()
{
  int n;
  printf("Enter the size of array : ");
  scanf("%d",&n);
  int a[n];
  printf("enter %d elements in array ",n);
  for(int i=0; i<n; i++) {
    scanf(" %d",&a[i]);
  }
  int target;
  printf("Enter target sum : ");
  scanf("%d",&target);
  
  quickSort(a,0,n-1);
  printf("Number of operations :  %d", maxOperation(a,n,target));

  return 0;
}
