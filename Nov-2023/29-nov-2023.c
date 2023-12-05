/*
============================== LONGEST PALINDROME SUBSTRING =================================

Problem statement : Given a string return the longest palindrome substring

======================================================================================

Sample Input :  s = "abcdcab"

Sample Output : LPS : "cdc"

Explanation : 
=====================================================================================
*/


#include<stdio.h>
#include<string.h>
char ans[50];
void isPalindreome(char a[], int start, int end) {
  int i=start;
  int j=end;
  int flag=0;
  while (i<=j) {
    if(a[i] != a[j]) {
      return;
    }
    i++;
    j--;
  }
  if(end-start > strlen(ans)) {
    int k=0;
    for(int i=start; i<=end; i++) {
      ans[k] = a[i];
      k++;
    }
  }
} 
int main(int argc, char const *argv[])
{

  char a[50];
  printf("Enter string : ");
  gets(a);
  int n = strlen(a);
  for(int i=0; i<n-1; i++) {
    for(int j=i+1; j<n; j++) {
      isPalindreome(a,i,j);
    }
  }
  if(strlen(ans) == 0) {
    printf("ans is : %c",a[0]);
  } else {
    printf(" ans is : ");
    puts(ans);
  }
  return 0;
}