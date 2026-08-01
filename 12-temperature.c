#include <stdio.h>

int main(){
    int celcius; float fahrenheti;
    printf("Enter the temperature in celcius:");
    scanf("%d",&celcius);
    fahrenheti=(celcius*9/5)+32;
    printf("Temperature in farenhetic is:%f",fahrenheti);
    return 0;
}