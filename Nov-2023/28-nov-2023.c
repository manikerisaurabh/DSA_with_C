/*
============================== LONGEST SUBSTRING WITHOUT REPEATING CHARACTER =================================

Problem statement : Given a string find the longest substring without 
                    repeating character

======================================================================================

Sample Input :  S = "abcabcbb"

Sample Output : 3

Explanation : 
=====================================================================================
*/



#include<stdio.h>
#include<string.h>
int isDistinct(char a[], char ch) {
  for(int i=0; i<strlen(a); i++) {
    if(a[i] == ch) {
      return 0;
    }
  }
  return 1;
}

void resetAns(char a[]) {
  for(int i=0; i<strlen(a); i++) {
    a[i] = '1';
  }
}
int maxSubString(char a[]) {
  int n = strlen(a);
  char ans[strlen(a)];
  resetAns(ans);
  int count = 0;
  int temp = 0;
  int j=0;
  for(int i=0; i<n; i++) {
    if(isDistinct(ans, a[i])) {
      ans[j] = a[i];
      temp++;
      j++;
    } else {
      if(temp>count) {
        count=temp;
        temp=0;
      }
      resetAns(ans);
      i--;
    }

  }
  return count>temp ? count : temp;
}
int main(int argc, char const *argv[])
{
  char a[50];
  printf("ENter string : ");
  gets(a);
  printf("max length of unique substring : %d",maxSubString(a));
  return 0;
}