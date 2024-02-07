/*
============================== count number of 1s  =================================

Problem statement : Write a efficient program to count the number of 1s int the
                    binary representation of an integer

======================================================================================

Sample Input : 6

Sample Output : 2

Explanation : Binary representatipn of 6 is 110 and has 2 set bits
=====================================================================================
*/

#include <stdio.h>
unsigned int countSetBits(unsigned int n)
{
    unsigned int count = 0;
    while (n)
    {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
int main()
{
    int i = 9;
    printf("%d", countSetBits(i));
    return 0;
}