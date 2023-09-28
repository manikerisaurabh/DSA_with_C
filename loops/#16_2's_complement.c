/*
==============================  2's complement of a binary number =================================

Problem statement : 

======================================================================================

Sample Input :  Binary Number : 01101110

Sample Output : 10010010

Explanation : 1's complement is:
                                10010001
            2's complement is :
                                10010010
=====================================================================================
*/

#include <stdio.h>
#include <string.h>
int main()
{
    int i = 0, n = 0, a;
    char bin[10];
    printf("enter the binary no :");
    scanf("%s", bin);
    a = strlen(bin);
    char ans[a] = {'0'};
    int carry = 1;
    for(int i=a-1; i>=0; ) {
        if (bin[i] == '1') {
            bin[i] = '0';
        }else {
            bin[i] = '1';
        }


        if(bin[i] ==  '1' && carry == 1) {
            ans[i] = '0';
            carry = 1;
        } else if(bin[i] == '1' && carry == 0) {
            ans[i] = '1';
            carry = 0;
        } else if(bin[i] == '0' && carry == 1) {
            ans[i] = '1';
            carry = 0;
        } else {
            ans[i] = '0';
            carry = 0;
        }
        i--;
    }
    printf("THE 1`S COMPLIMENT OF GIVEN BINARY NO IS :%s\n", bin);
    printf("THE 2`S COMPLIMENT OF GIVEN BINARY NO IS :");
    strcpy(bin, ans);
    bin[a] = '\0';
    puts(bin);
    return 0;
}