#include <stdio.h>
main(){int n1,n2,n3,n4,r;
printf("Enter the number =>");
scanf("%d",&n1);
r = n1%2;
if(r==0 && n1>0){
    n2=n1+2;
    n3=n2+2;
    n4=n3+2;
    printf("The three succeeding even numbers are %d,%d,%d",n2,n3,n4);
}
else if(r!=0 && n1<0){
    n2=n1-2;
    n3=n2-2;
    n4=n3-2;
    printf("The three preceding odd numbers are %d,%d,%d",n2,n3,n4);
}
else {
    printf("Number is neither positive even nor negative odd");
}
getch();
}
