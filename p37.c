//1+4+9+.........+100
#include <stdio.h>
int main(){
  int i,s=0;
  for(i=1;i<=10;i++){
    s=s+i*i;
  }
    printf("The sum is %d",s);
return 0;  
}
