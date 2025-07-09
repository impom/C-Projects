//1!+2!+3!+.........+n!
#include <stdio.h>
int main(){
  int n,i,f=1,j,s=0;
  printf("Enter the number : ");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    f=1;
    for(j=1;j<=i;j++)
      {f=f*j;}
    s=s+f;
  }
  printf("The Sum is %d",s);
  return 0;
}
