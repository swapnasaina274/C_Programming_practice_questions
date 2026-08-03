#include <stdio.h>

int main(){
    int A,P,r,n,t;
    printf("Enter the values for initial principle P =\n");
    scanf("%d",&P);
    printf("Enter the values for interest rate r =\n");
    scanf("%d",&r);
    printf("Enter the values for no.of times interest applied per time period =\n");
    scanf("%d",&n);
    printf("Enter the values for no.of time periods elapsed P =\n");
    scanf("%d",&t);
    A=P*(1+r/n);
    printf("The compound interest is:%d",A);
    return 0;

}