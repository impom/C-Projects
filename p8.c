//Swapping Values without using extra variable
#include <stdio.h>
main (){
int a=10,b=12;
a=a+b;
b=a-b;
a=a-b;
printf("a = %d\nb = %d",a,b);
getch();
}
