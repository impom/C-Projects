#include <stdio.h>

int main()
{
  int a,b,c;
printf("Enter three numbers : ");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
    printf("The numbers are Pythagorian Triplets");
 else
    printf("The numbers are not Pythagorian Triplets");
 getch();
}
