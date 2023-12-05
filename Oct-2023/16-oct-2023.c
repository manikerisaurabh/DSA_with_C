/*
============================== LARGEST SUM OF CONTIGEOUS ARRAY =================================

Problem statement : Write a C program to find the largest sum of contigeous subarray
                    int the array

======================================================================================

Sample Input :  a[] = {8,3,8,-5,4,3,-4,3,5}

Sample Output : 21

Explanation : 
=====================================================================================
*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements in array : ",n);
    for(int i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }

    int sum=0;
    for(int i=0; i<n-1; i++) {
        int temp=a[i];
        for(int j=i+1; j<n; j++) {
            temp+=a[j];
            if(temp>sum) {
                sum=temp;
            }
        }
    }
    printf("the largest sum is %d",sum);
    
}
