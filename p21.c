#include <stdio.h>
int main() {
    int a,b,c,r;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("............MENU...........\n1 for Addition\n2 for Subtraction\n3 for Multiplication\n4 for Divition\nEnter your choice: ");
    scanf("%d",&c);
    switch(c)
{
    case 1: r=a+b;
    printf("\nThe result is %d",r);
    break;
    case 2: r=a-b;
    printf("\nThe result is %d",r);
    break;
    case 3: r=a*b;
    printf("\nThe result is %d",r);
    break;
    case 4: r=a/b;
    printf("\nThe result is %d",r);
    break;
    default: printf("\nWRONG CHOICE");
    break;
}
}
