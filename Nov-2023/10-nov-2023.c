/*
============================== COLUMN WITH MINIMUM NUMBER OF 0's  =================================

Problem statement : Given a 2D matrix consisting only 0's and 1's 
                    return the index consisting macimum number of 0's

======================================================================================

Sample Input :  N = 3
                M[3][3] = {{0,0,0,},
                            {1,0,1},
                            {0,1,1}}

Sample Output : 0

Explanation : 
=====================================================================================
*/


#include<stdio.h>
int main()
{
  int r,c;
  printf("Enter row and column of 2D matrix : ");
  scanf("%d %d",&r,&c);
  int a[r][c];
  printf("Enter %d elements in array : ",(r*c));
  for(int i=0; i<r; i++) {
    for(int j=0; j<c; j++) {
      scanf("%d",&a[i][j]);
    }
  }
  int col=-1;
  int ans=0;
  for(int i=0; i<c; i++) {
    int temp=0;
    for(int j=0; j<r; j++) {
      if(a[j][i] == 0) {
        temp++;
      }
    }
    if(temp>ans) {
      ans=temp;
      col = i;
    }
  }

  if(col>-1) {
    printf("Column no : %d",col);
  } else {
    printf("ans : 0");

  }
}