#include <stdio.h>

int main(){
    int a,b,right_shift;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
   right_shift=a>>b;
    printf("Result:%d\n",right_shift);
    return 0;
}