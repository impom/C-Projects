//Input 10 numbers and find the average
#include <stdio.h>
int main(){
   int c,n,s=0,avg;
  printf("Enter the numbers : ");
  for(c=1;c<=10;c++){
    scanf("%d",&n);
    s=s+n;
  }
  avg = s/10;
  printf("The average of 10 numbers are %d",avg);
  return 0;
}
