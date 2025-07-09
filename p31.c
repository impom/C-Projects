/*1+2+3+.....+10*/
#include <stdio.h>
int main(){
  int i=1,s=0;
  while(i<=10){
    s=s+i;
    i++;
  }
  printf("Sum is %d",s);
  return 0;
}
