/*
============================== BUTTERFLY PATTERN =================================

Problem statement : Print Butterfly Pattern with given number of row

======================================================================================

Sample Input :  

Sample Output : 

Explanation : 
=====================================================================================
*/

#include <stdio.h>
int main() 
{
  int i,j,n;
  printf("Enter the number:");
  scanf("%d",&n);

  for(i=n;i>=1;i--) {
    for(j=n;j>=1;j--) {
      if(j>=i)
        printf("*");
      else
        printf(" ");
    }
    for(j=1;j<=n;j++) {
      if(j>=i)
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }

//2nd step
  for(i=1;i<=n;i++) {
    for(j=n;j>=1;j--) {
      if(j>=i)
        printf("*");
      else
        printf(" ");
    }
    for(j=1;j<=n;j++) {
      if(j>=i)
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
}