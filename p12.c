//Use of nested if
#include <stdio.h>
main (){
int n;
printf("Enter an integer =>");
scanf("%d",&n);
if (n<0)
    printf("\nNumber is negative");
else
    if (n==0)
    printf("Number is zero");
else
printf("\nNumber is positive");
getch();
}
