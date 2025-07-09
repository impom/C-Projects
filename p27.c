#include <stdio.h>

int main()
{
  int n,r,q,s;
printf("Enter the two digit number : ");
scanf("%d",&n);
r=n%10;
q=n/10;
s=r*10+q;
printf("The reversed number is %d",s);
getch();
}
