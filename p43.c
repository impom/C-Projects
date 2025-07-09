//43. Display the numbers 1,1,2,3,5,8,13 (Fibonacci numbers)
#include<stdio.h>
int main()
{
      int i=1,j=1,s=0,c=1;
      printf("%d",i);
      printf("\n%d",j);
      while(c<=5)
      {
                 s=i+j;
                 printf("\n%d",s);
                 i=j;
                 j=s;
                 c=c+1;
      }
return 0;
}
