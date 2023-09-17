/*
==============================  units consumed by customer  =================================

Problem statement : Write a C program to calculate and print the electricity bill of a given customer
                    The customer ID, Name, and units consumed by the user should be captured from the
                    keyboard to display the total amount to be paid to customer 

the charge as follow :
Units                                              Charge/unit
upto 199                                           @1.20
200 > unit < 400                                   @1.50
400 > unit < 600                                   @1.80
unit >= 600                                        @2.00


if bill exceed the Rs 400 then a surcharge of 15% will be charged and the minimum bill 
should be Rs 100/-
======================================================================================

Sample Input :  1001
                Saurabh
                800

Sample Output : Customer ID : 1001
                Customer Name : Saurabh
                unit consumed : 800
                Amount charged @Rs. 2.00 per unit : 1600
                Surcharge Amount : 240.00
                Net Amount Paid by the customer : 1840.00
====================================================================================
*/


#include<stdio.h> 
int main() 
{ 
	int id;
	char name[30],temp;
	float unit,charge;
	printf("\n Enter Id : ");
	scanf("%d",&id);
	scanf("%c",&temp);
	printf("\nEnter Name : ");
	gets(name);
	printf("\nEnter units consumed by user : ");
	scanf("%f",&unit);
	if(unit<200) {
		charge = 1.20;
	} else if(unit>199 && unit<400) {
		charge = 1.50;
	} else if(unit>399 && unit<600) {
		charge = 1.80;
	} else {
		charge = 2.0;
	}
	printf("\n  Id : %d",id);
	printf("\n  Name : %s",name);
	printf("\n  Id : %f",unit);
	float amount = unit*charge;
	if(amount <100) {
		amount = 100;
	}
	printf("\nAmount Charges @Rs %f \n per unit %f",charge,amount);
	
	if(amount > 400) {
		float surCharge = amount*15/100;
		printf("\nSurchage Amount : %f",surCharge);
		amount+=surCharge;
		printf("\nNet amount paid by customer : %f ",amount);
	}
	return 0; 
}