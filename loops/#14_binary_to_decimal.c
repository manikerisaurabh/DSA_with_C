/*
==============================  Binary to Decimal =================================

Problem statement : Write a C program to input a binary number from user and
                    convert binary number to decimal number system.

======================================================================================

Sample Input :  0011

Sample Output : 3

Explanation : 
=====================================================================================
*/

#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    printf("enter the digits in binary number : ");
    scanf("%d",&n);
    char bin[n+1];
    getchar();
    printf("Enter binary number : ");
    gets(bin);
    int pointIdx=n;
    for(int i=0; i<n+1; i++) {
        if(bin[i] == '.') {
            pointIdx = i;
            break;
        }
    }
    float mainDeci=0, subDeci=0;
    float count=1;
    for(int i=pointIdx-1; i>=0; i--) {
        mainDeci += (bin[i]-48) * count;
        count *= 2;
    }

    count = 2;
    if(pointIdx != n) {
        for(int i=pointIdx+1; i<n+1; i++) {
            subDeci += (bin[i]-48) / count;
            count *= 2;
        }
    }
    mainDeci+=subDeci;
    printf("Decimal conversion of %s is %f ",bin,mainDeci);
}