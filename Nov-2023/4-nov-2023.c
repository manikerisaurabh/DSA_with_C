/*
==============================  =================================

Problem statement : Given a string consisting alphabets and digits
                    print the series og 0-9 with the repeating count

======================================================================================

Sample Input :  s = "a11472o5t6"

Sample Output : 0 2 1 0 1 1 1 1 0 0 

Explanation : 
=====================================================================================
*/

#include<stdio.h>
#include<string.h>
int main()
{
	char str[1001];
	int i,f=0,f1=0,f2=0,f3=0,f4=0,f5=0,f6=0,f7=0,f8=0,f9=0;
	printf("\n\t Enter the string: ");
	gets(str);
    for(i=0;i<strlen(str);i++)
    {
    switch(str[i])
    {
    case '0':
        f++;
        break;
    case '1':
        f1++;
        break;
    case '2':
        f2++;
        break;
    case '3':
        f3++;
        break;
    case '4':
        f4++;
        break;   
    case '5':
        f5++;
        break;    
    case '6':
        f6++;
        break;    
    case '7':
        f7++;
        break;    
    case '8':
        f8++;
        break; 
    case '9':
        f9++;
        break; 
    default :
    printf(" ");
    }
    }
    printf("\n\t %d %d %d %d %d %d %d %d %d %d ",f,f1,f2,f3,f4,f5,f6,f7,f8,f9);
    
}