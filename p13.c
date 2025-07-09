#include <stdio.h>
main (){
int a,b,sq,cube,diff;
printf("Enter The first number =>");
scanf("%d",&a);
printf("\nEnter The second number =>");
scanf("%d",&b);
if(a==b)
    printf("Both numbers are equal");
else if (a>b){
    sq = b*b;
    cube = a*a*a;
    diff= cube-sq;
    printf("The square of the smaller number is -> %d\nThe cube of the greater number is -> %d\nThe difference between their result is %d",sq,cube,diff);
}
else if (b>a){
    sq = a*a;
    cube = b*b*b;
    diff= cube-sq;
    printf("The square of the smaller number is -> %d\nThe cube of the greater number is -> %d\nThe difference between their result is %d",sq,cube,diff);
}
getch();
}
