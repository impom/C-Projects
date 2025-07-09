#include <stdio.h>

int main()
{
  int a,b,c;
printf("Enter a positive integer : ");
scanf("%d",&a);
if(a>0 && a<10)
    printf("The number is single digit");
else if (a<100)
    printf("The number is double digit");
 else if (a<1000)
    printf("The number is triple digit");
 else
    printf("The number is not single , double or triple digit");
 getch();
}
