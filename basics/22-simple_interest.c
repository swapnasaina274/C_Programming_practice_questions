#include <stdio.h>

int main(){
    int S,P,R,T;
    printf("Enter the value of principle,rate and time:");
    scanf("%d %d %d",&P,&R,&T);
    S=(P*R*T)/100;
    printf("The simple intrest earned:%d",S);
    return 0;
}