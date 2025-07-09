#include <stdio.h>
int main() {
    int n,s;
    printf("Enter the marks of the student => ");
    scanf("%d",&n);
    s=n/10;
    if(s>=9){
        printf("Grade O: OUTSTANDING");
    }
    else if(s>=8){
        printf("Grade E: EXCELLENT");
    }
    else if(s>=7){
        printf("Grade A: VERY GOOD");
    }
    else if(s>=6){
        printf("Grade B: GOOD");
    }
    else if(s>=5){
        printf("Grade C: SATISFACTORY");
    }
    else if(s>=4){
        printf("Grade D: STANDARD");
    }
    else
        printf("FAIL");
}
