/*
==============================  Kth SMALLEST ELEMENT=================================

Problem statement : find the Kth smallest element from array

======================================================================================

Sample Input :  N =  6
                a[] = {7,10,4,3,20,15}
                k = 3

Sample Output : 7

Explanation : 
=====================================================================================
*/


#include <stdio.h>  
void swap(int* a, int* b) {  
    int t = *a;  
    *a = *b;  
    *b = t;  
}  
int partition(int a[], int low, int high) {  
    int pivot = a[high];  
    int i = (low - 1);  
  
    for (int j = low; j <= high - 1; j++) {  
        if (a[j] < pivot) {  
            i++;  
            swap(&a[i], &a[j]);  
        }  
    }  
    swap(&a[i + 1], &a[high]);  
    return (i + 1);  
}  
void quickSort(int a[], int low, int high) {  
    if (low < high) {  
        int pi = partition(a, low, high);  
        quickSort(a, low, pi - 1);  
        quickSort(a, pi + 1, high);  
    }  
}  
  
int kthSamllest(int a[], int l, int r, int k) {
    return a[k-1];
}
int main() {  
    int n;
    printf("Enter the size of aay : ");
    scanf("%d",&n);
    int a[n];  
    printf("Enter %d elements in aay  : ",n);
    for(int i=0; i<n; i++) {
        scanf("%d",&a[i]);
    } 
    int k;
    printf("ENter the value for k : ");
    scanf("%d",&k);
    quickSort(a, 0, n - 1);  

    printf("Sorted aay: \n");
    printf("%d  samlles no is %d",k,kthSamllest(a, 0, n-1, k));
    return 0;  
}