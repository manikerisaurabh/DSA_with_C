/*
============================== MAGICAL KEYBOARD =================================

Problem statement : Imagine u have a magical keyboard with the following key
                    key 1 : prints 'A' on screen
                    key 2 : {Ctrl-A} : select the screen
                    key 3 : {Ctrl-C} : copy screen text
                    key 4 : {Ctrl-V} : paste the copied text

                    find the minimum number of A's that can be produced by 
                    pressing key on the special keyboard N times

======================================================================================

Sample Input :  N = 3

Sample Output : 3

Explanation : 
=====================================================================================
*/


#include<stdio.h>
int maxA(int n) {
  if(n <= 6) {
    return n;
  }
  int max = 0;
  for(int i=n-3; i>0; i--) {
    int temp = (n - i - 1) * maxA(i);
    if (temp > max) {
      max = temp;
    }     
  }
  return max;
}
int main() {
  int n;
  printf("enter value for N : ");
  scanf("%d",&n);
  printf("MAXIMUM COUNT OF CHAR 'A' IS : %d",maxA(n));
}
