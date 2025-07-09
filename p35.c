//To input 10 numbers and finding how many odd and evens are there
#include <stdio.h>
int main(){
  int i,n,ev=0,odd=0;
  printf("Enter the numbers : ");
  for(i=1;i<=10;i++){
    scanf("%d",&n);
    if(n%2==0)
      ev++;
    else
      odd++;
  }
  printf("There are total %d even numbers and %d odd numbers",ev,odd);
  return 0;
}
