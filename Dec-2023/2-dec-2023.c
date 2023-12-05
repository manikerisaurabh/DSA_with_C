/*
==============================  =================================

Problem statement : Given two string needle and haystack,
return the index of first occurrence of needle in haystack 
or -1 if needdle is not part of haystack

======================================================================================

Sample Input :  haystack = "sadbutsad" 
                needle = "sad"

Sample Output : 0

Explanation : 
=====================================================================================
*/


#include<stdio.h>
#include<string.h>
int isAcquire(char parent[], char child[], int start) {
  int j=0;
  for(int i=start; i<strlen(parent) && j<strlen(child); i++, j++) {
    if(parent[i] != child[j]) {
      return 0;
    }
  }
  return 1;
}
int main(int argc, char const *argv[])
{
  char needle[20];
  char haystack[20];
  printf("ENter haystack : ");
  gets(haystack);
  printf("Enter needle : ");
  gets(needle);
  int flag=0;
  int i;
  for(i=0; i<strlen(haystack); i++) {
    if(haystack[i] == needle[0]) {
      if(isAcquire(haystack, needle, i)) {
        flag++;
        break;
      }
    }
  }
  if(flag == 1) {
    printf("First Occurrence is : %d",i);
  } else {
    printf("First Occurrence is : -1");
  }
  return 0;
}