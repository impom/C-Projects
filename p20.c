#include <stdio.h>
int main() {
    int a,b,c;
    float r;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("............MENU...........\n1 for Addition\n2 for Subtraction\n3 for Multiplication\n4 for Divition\nEnter your choice: ");
    scanf("%d",&c);
    if(c==1){
        r=a+b;
        printf("The result is %f",r);
    }
    else if(c==2){
        r=a-b;
        printf("The result is %f",r);
    }
    else if(c==3){
        r=a*b;
        printf("The result is %f",r);
    }
    else if(c==4){
        r=(float)a/b;
        printf("The result is %f",r);
    }
    else printf("You entered a wrong input");
}
