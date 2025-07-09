#include <stdio.h>

int main()
{
  int a,b,c;
printf("Enter the number : ");
scanf("%d",&a);
b=a%2;
c=a%5;
if(b==0 && c!=0)
    printf("The number is divisible by 2 but not 5");
else if (b!=0 && c==0)
    printf("The number is divisible by 5 but not 2");
 else if (b==0 && c==0)
    printf("The number is divisible by 2 and 5");
 else
    printf("The number is neither divisible by 5 nor 2");
 getch();
}
