//It is same as p34.c
//Input 100 numbers and find the average
#include <stdio.h>
int main(){
   int c,n,s=0,avg;
  printf("Enter the numbers : ");
  for(c=1;c<=100;c++){
    scanf("%d",&n);
    s=s+n;
  }
  avg = s/100;
  printf("The average of 100 numbers are %d",avg);
  return 0;
}
