/*
==============================  decimal to binary =================================

Problem statement : Write a C program to input Octal number from user ans
                    convert it to Binary number

======================================================================================

Sample Input :  172

Sample Output : 1111010

Explanation : 
=====================================================================================
*/

#include<stdio.h>
#include<string.h>
#include<math.h>
int octalToDeci(char a[], int size) {
    int deci=0;
    for(int i=size-1,j=0; i>=0; i--,j++) {
        deci+= (a[i]-48) * (pow(8,j));
    }
    return deci;
}

void deciToBin(int n) {
    int a[10];
    int i=0;
    while(n > 0) {
        int re = n%2;
        a[i] = re;
        i++;
        n/=2;
    }
    i--;
    for(int j=i; j>=0; j--) {
        printf("%d ",a[j]);
    }
}

int main()
{
    char a[100];
    printf("Enter Octal Number : ");
    gets(a);
    int size = strlen(a);
    int p = octalToDeci(a,size);
    printf("Binary Conversion of %s is : ",a);
    deciToBin(p);
    return 0;
}