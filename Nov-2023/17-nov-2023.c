/*
============================== PALINDROME STRING =================================

Problem statement : Given a String check if it is Palindrome or not

======================================================================================

Sample Input :  s = "abba"

Sample Output : 1

Explanation : 
=====================================================================================
*/

#include<stdio.h>
#include<string.h>
int isPalindrome(char a[]) {
  int j=strlen(a)-1;
  int i=0;
  while(i<=j) {
    if(a[i] != a[j]) {
      return 0;
    }
    i++;
    j--;
  }
  return 1;
}
int main() 
{
  char a[50];
  printf("enter string ");
  gets(a);
  if(isPalindrome(a)) {
    printf("%s is Palindrome",a);
  } else {
    printf("%s is not Palindrome",a);
  }
}
