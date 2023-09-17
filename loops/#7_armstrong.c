/*
==============================  Armstrog number =================================

Problem statement : Write a c program to check whether a given number is an Armstrog 
                    number or not

======================================================================================

Sample Input :  153

Sample Output : Armstrong

Explanation : (1*1*1)+(5*5*5)+(3*3*3) = 153
=====================================================================================
*/

#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    int temp = n,count=0,ans=0;
    while(temp > 0) {	//calculating digits from number
    	count++;
    	temp/=10;
	}
	temp=n;
	while(temp!=0) {	//appling formula to each and every digit of the number
						//formula {(single_digit)power(number of dgit)}
		int re = temp%10;
		ans+= pow(re,count);
		temp/=10;
	}
	if(ans == n) {
		printf("armstrong");
	} else {
		printf("not armstrong");
	}
    return 0;
}