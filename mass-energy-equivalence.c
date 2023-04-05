// Mass - Energy equivalence
#include <stdio.h>

int main(void){
  float e,m,c=300000000;
  int a,b;
  printf("What do you want to calculate ? \n[1] Energy \n[2] Mass\n=> ");
  scanf("%d",&a);
  if(a==1){
    printf("Enter the value of mass => ");
    scanf("%f",&m);
    e=m*c*c;
    printf("\nThe amount of energy is %f",e);
  }
  else if(a==2){
     printf("Enter the value of energy => ");
    scanf("%f",&e);
    m=e/(c*c);
    printf("The amount of mass is %f",m);
  }
  else{
    printf("error");
  }
}
