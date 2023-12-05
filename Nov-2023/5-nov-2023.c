/*
============================== MOST TRAPPING RAIN WATER =================================

Problem statement : Given an array (height) of length n. There are n vertical lines such
                    as that the two endpoinnts og the ith line are [i,0]
                    and [i, height[i]]

                    find two lines such as that together with the x-axis from a[]
                    suchh that the container contains most water

======================================================================================

Sample Input :  height[] = {1,8,6,2,5,4,8,3,7}

Sample Output : 49

Explanation : 
=====================================================================================
*/



#include<stdio.h>
#include<math.h>
int max(int a, int b) {
    if(a>=b) {
        return a;
    }
    return b;
}

int min(int a, int b) {
    if(a<=b) {
        return a;
    }
    return b;
}
int main()
{
    int n;
    printf("Enter the length : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the height of %d column : ");
    for(int i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    int totalWater=0;
    if(n<3) {
        totalWater = 0;
    } else {
        int k=1;
        int i=0,j=n-1;
        while (i<=j)
        {
            int temp = min(a[i], a[j])*(n-k);
            if(temp>totalWater) {
                totalWater = temp;
            }
            if(a[i]<a[j]) {
                i++;
            } else {
                j--;
            }
            k++;
        }
        
    }
    printf("Total trapped water is : %d",totalWater);
}