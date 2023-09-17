/*
==============================  Grade of a Student =================================

Problem statement : Write a C program to input marks of five subject and grade them 
                    according to following 

                    percentage >= 90%  : Grade A
                    percentage >= 80%  : Grade B
                    percentage >= 70%  : Grade C
                    percentage >= 60%  : Grade D
                    percentage >= 40%  : Grade E
                    percentage <= 40%  : Grade F

======================================================================================

Sample Input :  Math : 80
                English : 90
                Physics : 70
                Chem : 88
                IT : 90

Sample Output : Grade : B

Explanation : 80+90+70+88+90 = 418
            418/5 = 83.6
====================================================================================
*/


#include<stdio.h>
#include<math.h>
int main()
{
	float phy,che,bio,maths,comp,s,r;
	printf("enter the marks of physics:");
	scanf("%f",&phy);
	printf("enter the marks of chemistry:");
	scanf("%f",&che);
	printf("enter the marks of biology:");
	scanf("%f",&bio);
	printf("enter the marks of maths:");
	scanf("%f",&maths);
	printf("enter the marks of computer:");
	scanf("%f",&comp);
	r=(phy+che+bio+maths+comp)/5;
	s=phy+che+bio+maths+comp;
	printf("\n\t\t The total is:%f",s);
	
	printf("\n\t\t The percentage is:%f",r);
	
	if(r<=100){
	
	if(r>=90){
		printf("\n\t\t Grade A");
	}
	else if(r>=80){
		printf("\n\t\t Grade B");
	}
		else if(r>=70){
		printf("\n\t\t Grade C");
	}
		else if(r>=60){
		printf("\n\t\t Grade D");
	}
		else if(r>=40){
		printf("\n\t\t Grade E");
	}}
		else{
			printf("\n\t\t Grade F");
		}
	return 0;

}