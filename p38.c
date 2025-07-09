//a^0+a^1+a^2+a^3+.....+a^10
#include <stdio.h>
#include <math.h>
int main(){
  int a,i,s=0;
  printf("Enter the number : ");
  scanf("%d",&a);
  for(i=0;i<=10;i++){
    s=s+pow(a,i);
  }
  printf("The sum is %d ",s);
  return 0;
}
