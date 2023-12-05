/*
============================== VALID PARANTHESIS =================================

Problem statement : Given a string of character [(,),{,},[,]]
                    determine wheter the sring is valid paranthesis or not

======================================================================================

Sample Input :  s = "{()}"

Sample Output : true

Explanation : 
=====================================================================================
*/


#include<stdio.h>
#include<string.h>
int isValid(char a[]) {
  int stack[strlen(a)];
  int top=-1;
  for(int i=0; i<strlen(a); i++) {
    if(top == -1) {
      top++;
      stack[top] = a[i];
    } else if(stack[top] == '{' && a[i] == '}') {
      top--;
      
    } else if(stack[top] == '[' && a[i] == ']') {
      top--;
    } else if(stack[top] == '(' && a[i] == ')') {
      top--;
    } else {
      top++;
      stack[top] = a[i];
    }
  }
  if(top == -1) {
    return 1;
  }
  return 0;
}
int main(int argc, char const *argv[])
{
  char a[20];
  printf("Enter String : ");
  gets(a);
  if(isValid(a)) {
    printf(" %s is balanced parentheses string ",a);
  } else {
    printf("%s is not a balanced parentheses string ",a);
  }
  return 0;
}