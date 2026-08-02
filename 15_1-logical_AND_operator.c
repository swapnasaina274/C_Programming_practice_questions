#include <stdio.h>

int main(){
    int a,b;
    printf("Enter the value of a and b:");
    scanf("%d %d", &a, &b);
    if(a&&b)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }
    
    return 0;
}