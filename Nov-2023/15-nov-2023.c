/*
============================== NUMBER OF UNION  =================================

Problem statement : Given two array a and b return the number of union elements

======================================================================================

Sample Input :  a[] = {1,2,3,4,5}
                b[] = {1,2,3}

Sample Output : 5

Explanation : 
=====================================================================================
*/


#include <stdio.h>
int main()
{
int n,m,i,j,flag=0;
printf("Enter the size first of Array : ");
scanf("%d",&m);
int ary[m];
printf("Enter Array :");
for(i=0;i<m;i++)
{
    scanf("%d",&ary[i]);
}
printf("Enter the size second of Array : ");
scanf("%d",&n);
int ary2[n];
printf("Enter Array :");
for(i=0;i<n;i++)
{
    scanf("%d",&ary2[i]);
}
for(i=0;i<m;i++)
{
   for(j=0;j<n;j++)
   {
     if(ary[i]==ary2[j])
     {
       flag++;
       break;
     }
   }
}
printf("Output : %d",(m+n)-flag) ;
         
return 0;
}