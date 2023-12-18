/*
============================== Maximum Average Subarray  =================================

Problem statement : You are given an integer array nums consisting of n elements, and an integer k.

                    Find a contiguous subarray whose length is equal to k that has the maximum average value and return this value. Any answer with a 
            
                    calculation error less than 10-5 will be accepted.

======================================================================================

Sample Input :  
                Example 1:
                    Input: nums = [1,12,-5,-6,50,3], k = 4
                    Output: 12.75000
                    Explanation: Maximum average is (12 - 5 - 6 + 50) / 4 = 51 / 4 = 12.75


                Example 2:
                    Input: nums = [5], k = 1
                    Output: 5.00000

Sample Output : 

Explanation : 
=====================================================================================
*/





#include<stdio.h>
double maxAvg(int a[], int sub, int len) {
    int sum = 0;
    for(int i=0; i<sub; i++) {
        sum+=a[i];
    }
    double maxSum=sum;
    for(int i=sub; i<len; i++) {
        sum += a[i] - a[i-sub];
        if(sum > maxSum) {
            maxSum = sum;
        }
    }
    return (maxSum/sub);
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements in to array ");
    for(int i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    int sub;
    printf("Enter the size of subarray : ");
    scanf("%d",&sub);
    printf("Max average : %f",maxAvg(a, sub, n));
    return 0;
}
