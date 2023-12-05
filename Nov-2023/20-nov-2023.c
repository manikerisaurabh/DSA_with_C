/*
============================== PASCAL'S TRAINGLE =================================

Problem statement : Write a C program which prints Pascal's traingle

======================================================================================

Sample Input :  

Sample Output : 

Explanation : 
=====================================================================================
*/


#include<stdio.h>
void pascalTraingle(int n) {
  for(int i=1; i<=n; i++) {
    for(int j=1; j<=n-i; j++) {
      printf("  ");
    }
    int val=1;
    for(int k=1; k<=i; k++) {
      printf("%5d",val);
      val = val*(i-k)/k;
    }
    printf("\n");
  }
}
int main() {
  int n;
  printf("Enter number of row's : ");
  scanf("%d",&n);
  pascalTraingle(n);
}