
// A calculator made with C 
#include <stdio.h>

int main(){
  int n1,n2,sum,sub,mult,opt;
  float avg,div;
  printf("⍟ Ⓡ Ⓤ Ⓟ Ⓐ Ⓜ  ♥‿♥ \n\n");
  printf("Enter 1st Number : ");
  scanf("%d",&n1);
  printf("Enter 2nd Number : ");
  scanf("%d",&n2);
  sum=n1+n2;
  sub=n1-n2;
  mult=n1*n2;
  avg=(float)sum/2;
  div=(float)n1/n2;
  printf("\n⍟ Ⓡ Ⓤ Ⓟ Ⓐ Ⓜ ♥‿♥\n\n");
  printf("MAIN MENU \n  Choose options from below : \n[1] Summation \n[2] Subtraction \n[3] Multiplication\n[4] Division \n[5] Average :");
  scanf("%d",&opt);

  if (opt==1){
   printf("The summation of %d and %d is : %d ",n1,n2,sum);
    
  }
  if (opt==2){
   printf("The subtraction of %d and %d is : %d ",n1,n2,sub);
    
  }
  if (opt==3){
   printf("The multiplication of %d and %d is : %d ",n1,n2,mult);
    
  }
  if (opt==4){
   printf("The division of %d and %d is : %f ",n1,n2,div);
    
  }
  if (opt==5){
   printf("The average of %d and %d is : %f ",n1,n2,avg);
    
  }
  else{
    printf("Option does not exsist , Please restart the program!!");
  }
  return 0;
}
