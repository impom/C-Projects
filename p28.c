#include <stdio.h>

int main()
{
  int a,b,c,d,e,f;
printf("Enter the three digit number : ");
scanf("%d",&a);
b=a%100;
c=a%10;
d=a/100;
e=b/10;
f=c*100+e*10+d;
if(f==a)
printf("The number is palindrome");
else
    printf("The number is not palindrome");
getch();
}
