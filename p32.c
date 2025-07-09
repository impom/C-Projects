//to find the sum of even numbers between 1-100
#include <stdio.h>
int main(){
  int i=2,s=0;
  while(i<=100){
    s=s+i;
    i=i+2;
  }
  printf("Sum is %d",s);
  return 0;
}
