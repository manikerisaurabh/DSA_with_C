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
*/

#include<stdio.h>
#include<math.h>
int main()
{
    int id,u;
    char n;
    float c,subc,amount;
    printf("\n\t\t ---CUSTOMER DETAILS--");
    
    printf("\n\t\t ENTER YOUR ID:");
    scanf("%d",&id);
    printf("\n\t\t ENTER YOUR NAME:");
    scanf("%s",&n);
    printf("\n\t\t UNIT CONSUMED:");
    scanf("%d",&u);
    
    printf("\n\t\t **ELECTRICIRY BILL***");
    if(u>=100 && u<=199)
    {
        printf("\n\t\t THE AMOUNT CHARGES  @1.20  PER UNIT:%f Rs.",c=u*1.20);
    }
    else if(u>=200 && u<400)
    {
        printf("\n\t\t THE AMOUNT CHARGES  @1.50 PER UNIT:%f Rs.",c=u*1.50);
    }
    else if(u>=400 && u<600)
    {
        
        printf("\n\t\t THE AMOUNT CHARGES  @1.80 PER UNIT:%f, Rs.",c=u*1.80);
    }
    else if(u>1000) 
    {
        printf("\n\t\t THE AMOUNT CHARGES  @2.00 PER UNIT:%f Rs.",c=u*2.00);
    }
    else
    {
        printf("\n\t\t THE PAYABLE AMOUNT IS 100 Rs.");
    }
    
    // subcharge
    
    subc=c*15/100;
    if(u>=400)
    {
        printf("\n\t\t THE SUBCHARRGE IS :%f Rs.",subc);
    }
    else
    {
        printf("\n\t\t THE SUBCHARGE IS 0 Rs.");
    }
    // Total amount
    amount=c+subc;
    if(u>=400)
    {
        printf("\n\t\t THE PAYABLE AMOUNT IS:%f Rs.",amount);
    }
    else
    {
        printf("\n\t\t THE PAYABLE AMOUNT IS:%f",c);
    }
        printf("\n\t\t ----THANK YOU-----");
    return 0;
}