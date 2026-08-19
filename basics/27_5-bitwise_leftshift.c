#include <stdio.h>

int main(){
    int a,b,left_shift;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
   left_shift=a<<b;
    printf("Result:%d\n",left_shift);
    return 0;
}