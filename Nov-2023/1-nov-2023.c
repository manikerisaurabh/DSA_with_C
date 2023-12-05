/*
============================== SEARCH IN 2D MATRIX =================================

Problem statement : Write a C program in C to search an element in a row
                    wise and column wise sorted matrix

======================================================================================

Sample Input :  a[] =   {
                            {15,23,31,39},
                            {18,26,36,43},
                            {25,28,37,48},
                            {30,34,39,50}
                        }
                        given value  : 37

Sample Output : indices [2,2]

Explanation : 
=====================================================================================
*/

#include<stdio.h>
int main() {
	int r,c;
	printf("Enter number of row and coulmn : ");
	scanf("%d%d",&r,&c);
	int a[r][c];
	printf("Enter %d elements in 2D array : ",(r*c));
	for(int i=0; i<r; i++) {
		for(int j=0; j<c; j++) {
			scanf("%d",&a[i][j]);
		}
	}


	int key;
	printf("Enter the number to be search : ");
	scanf("%d",&key);
	printf("\nThe array is : \n");
	for(int i=0; i<r; i++) {
		for(int j=0; j<c; j++) {
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	int i=0,j=c-1;
	int flag=0;
	while (i<r && j>=0)
	{
		if(a[i][j] == key) {
			printf("%d found at row number %d and Column number %d",key,i+1,j+1);
			flag++;
			break;
		}
		if(a[i][j] > key) {
			j--;
		} else {
			i++;
		}
	}
	if(flag == 0) {
		printf("%d is not present in the array ",key);
	}

	
}