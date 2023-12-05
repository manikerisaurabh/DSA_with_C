/*
============================== PLATFORM SCHEDULLING =================================

Problem statement : Given an arriveal and desparture time for all trians 
                    find the minimum number of platform required

======================================================================================

Sample Input :  arrival[] = {9:00, 9:40, 9:50, 11:0, 15:00, 18:00}
             desparture[] = {9:10, 12:0, 11:20,11:30, 19:00, 20:00}


Sample Output : 3

Explanation : 
=====================================================================================
*/


#include<stdio.h>
int paltformReq(double arrival[], double departure[], double n) {
  int platform=1,j=0;

  for(int i=1; i<n; i++) {
    int count=1;
    for(int j=i+1; j<n; j++) {
      if((arrival[i] >= arrival[j] && arrival[i] <= departure[j])  || arrival[j] >=arrival[i] && arrival[j] <= departure[i]) {
        count++;
      }
    }
    if(count > platform) {
      platform = count;
    }
  }
  return platform;
}
int main() {
  int n;
  printf("Enter the number of trians : ");
  scanf("%d",&n);
  double arrival[n], departure[n];
  printf("Enter Arrival time of trains: ");
  for(int i=0; i<n; i++) {
    scanf("%lf",&arrival[i]);
  }
  printf("Enter Departure time of trains: ");
  for(int i=0; i<n; i++) {
    scanf("%lf",&departure[i]);
  }
  printf("platform req = %d",paltformReq(arrival, departure, n));
}