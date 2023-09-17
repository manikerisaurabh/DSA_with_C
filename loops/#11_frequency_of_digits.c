/*
==============================  Frequency of a digits =================================

Problem statement : Writ a c program to find the frequency of digits 

======================================================================================

Sample Input :  11650

Sample Output : Frequency of 0 = 1
                Frequency of 1 = 2
                Frequency of 3 = 0
                Frequency of 4 = 0
                Frequency of 5 = 1
                Frequency of 6 = 1
                Frequency of 7 = 0
                Frequency of 8 = 0
                Frequency of 9 = 0

Explanation : 
=====================================================================================
*/

#include<stdio.h>
int main()
{
    int num,f0=0,f1=0,f2=0,f3=0,f4=0,f5=0,f6=0,f7=0,f8=0,f9=0,n=0,r=0;
    printf("Enter number: ");
    scanf("%d",&num);
    n=num;
    while(n!='\0')
    {
        r=n%10;
        n=n/10;
        if(r==0)
        {
            f0++;
        }
        else if(r==1)
        {
            f1++;
        }
        else if(r==2)
        {
            f2++;
        }
        else if(r==3)
        {
            f3++;
        }
        else if(r==4)
        {
            f4++;
        }
        else if(r==5)
        {
            f5++;
        }
        else if(r==6)
        {
            f6++;
        }
        else if(r==7)
        {
            f7++;
        }
        else if(r==8)
        {
            f8++;
        }
        else if(r==9)
        {
            f9++;
        }
        else
        {
            
        }
        
        
    }
    printf("\nFrequency of 0: %d",f0);
    printf("\nFrequency of 1: %d",f1);
    printf("\nFrequency of 2: %d",f2);
    printf("\nFrequency of 3: %d",f3);
    printf("\nFrequency of 4: %d",f4);
    printf("\nFrequency of 5: %d",f5);
    printf("\nFrequency of 6: %d",f6);
    printf("\nFrequency of 7: %d",f7);
    printf("\nFrequency of 8: %d",f8);
    printf("\nFrequency of 9: %d",f9);
    
    return 0;
}