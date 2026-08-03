#include <stdio.h>

int main(){
    int num,sqr,sqrt;
    printf("Enter a number:");
    scanf("%d",&num);
    sqr=num*num;
    
    sqrt=sqr/num;
    printf("Squareroot:%d\n",sqrt);
    return 0;
}
//sqr=n*n
//sqr/n=sqrt