#include <stdio.h>
int main(){
  int n,i,f=0;
  printf("Enter the number ");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    if(n%i==0)
      f++;
  }
  if(f==2)
    printf("Number %d is prime");
  else
    printf("Number %d is non-prime");
  return 0;
}
