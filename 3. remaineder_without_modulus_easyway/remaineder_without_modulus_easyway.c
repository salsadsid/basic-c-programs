#include <stdio.h>
int main(){
    int a,b,quotient,remainder;

    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);

    quotient=a/b;
    remainder=a-(quotient*b);
    printf("\nQuotient: %d Remainder: %d\n",quotient,remainder);

    return 0;
}
