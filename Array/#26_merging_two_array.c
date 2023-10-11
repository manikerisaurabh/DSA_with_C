/*
==============================  Merging two array's =================================

Problem statement : Write a C program to merge two array's of different size 
                    sorting in descending order

======================================================================================

Sample Input :  first array -: [1,2,3,4,5]
                second array -:[7,68,90]

Sample Output : merged array -: [90,68,7,6,5,4,3,2,1]

Explanation : 
=====================================================================================
*/

#include<stdio.h>
int main()
{
  int n1;
  printf("Enter the size of first array : ");
  scanf("%d",&n1);
  int firstArr[n1];

  //taking input for first array
  printf("Enter %d elemnts in array in descending manner : \n",n1);
  for(int i=0; i<n1; i++) {
    scanf("%d",&firstArr[i]);
  }
  int n2;
  printf("Enter the size of second array : ");
  scanf("%d",&n2);
  int secondArr[n2];

  //taking input second for  first array
  printf("Enter %d elements in array in descending manner : \n",n2);
  for(int i=0; i<n2; i++) {
    scanf("%d",&secondArr[i]);
  }

  //creating array of size n1+n2
  int ans[n1+n2];

  //sorting the array and storing in new array
  int k=0;
  int i=0,j=0;
  //initially adding the element in ans array
  //till j and i is grater than -1
  for(i=n1-1, j=n2-1; i>=0&&j>=0; k++) {
    if(firstArr[i]>secondArr[j]) {
      ans[k] = firstArr[i];
      i--;
    } else {
      ans[k] = secondArr[j];
      j--;
    }
  }
  //if some elements remaining from first array then adding them in to ans[]
  if(i>=0) {
    for(; i>=0; i--) {
      ans[k] = firstArr[i];
      k++;
    }
  }

  //if some elements remaining from second array then adding them in to ans[]
  if(j>=0) {
    for(; j>=0; j--) {
      ans[k] = secondArr[j];
      k++;
    }
  }

  //printing final array
  printf("The merged array in descending order : ");
  for(int i=0; i<(n1+n2); i++) {
    printf("%d ",ans[i]);
  }
}