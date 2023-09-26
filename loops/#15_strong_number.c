/*
==============================  Strong Number =================================

Problem statement : Write a C program to input from user and check whether number is 
                    String or not

======================================================================================

Sample Input :  145

Sample Output : 145 is strong number 

Explanation : 1! + 4! + 5! = 145
=====================================================================================
*/

#include<stdio.h>
int fact(int  n) {
    if(n == 0) {
        return 1;
    }
    return n*fact(n-1);
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int temp=n;
    int ans=0;
    while(n > 0) {
        ans+=fact(n%10);
        n /= 10;
    }
    if(ans == temp) {
        printf("%d is strong number",temp);
    } else {
        printf("%d is not a strong number",temp);
    }
}