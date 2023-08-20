#include<stdio.h>
int main()
{
    double a,b,initialresult,subtraction,remainder;
    int quotient,c;

    printf("Please Enter a number: ");
    scanf(" %lf",&a);
    printf("Please Enter another number: ");
    scanf(" %lf",&b);

    initialresult =a/b;

    quotient=(int)initialresult;

    printf("\nQuotient(Vagfol): %d\n",quotient);
    subtraction=initialresult-quotient;
    remainder= subtraction*b;
    printf("Remainder: %lf\n",remainder);

    getchar();

    return 0;
}

