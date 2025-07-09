#include <stdio.h>

int main()
{
  int a,b,c;
printf("Enter the value of the angles : ");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
  if(a+b+c==180){
    printf("\nThe triangle is possible.");
  }
  else
    printf("The triangle is not possible");
  getch();
}
