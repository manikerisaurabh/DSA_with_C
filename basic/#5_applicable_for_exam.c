/*
========================  Student is applicable for exam or not =================================

Problem statement : A student is not will be allowed to sit in exam if he/she attended
                    lecture is less than 75% 

======================================================================================

Sample Input :  class held : 10
                class attended : 3

Sample Output : class attended : 30%
                student is not allowed to sit in exam 

Explanation : 30% is less than 75%
=====================================================================================
*/

#include<stdio.h>


int main()
{
    float a,b;
    float p;
    printf("\n\t\t ----ELIGIBILITY FOR EXAM---");
     printf("\n\t\t ENTER NO. OF CLASSES ATTENDED:");
     scanf("%f",&a);
     
      printf("\n\t\t ENTER NO. OF CLASSES HELD: ");
      scanf("%f",&b);
      
      
      printf("\n\t\t -------------------------");
      
      p=(a/b*100);
      printf("\n\t\t THE PERCENTAGE OF ATTENDANCE:%f",p);
     
     if(p>=75)
     {
          printf("\n\t\t CONGRATULATION!...YOU ARE ELIGIBLE FOR EXAM.");
     }
     else
     {
        printf("\n\t\t SORRY!...... YOU ARE NOT ELIGIBLE FOR EXAM.");
     }    
    return 0;
}