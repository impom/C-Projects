#include <stdio.h>
main(){
float d,s,s1,a,p;
    printf("Enter the value of diagonal of a square =>");
    scanf("%f",&d);
    s=(d*d)/2;
    s1 = sqrt(s);
    a=s1*s1;
    p=4*s1;
    printf("\nThe area is %f and perimetre is %f",a,p);
getch();
}

