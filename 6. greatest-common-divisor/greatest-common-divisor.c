#include <stdio.h>
int main()
{
    int a,b,x,gcd;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    if(a>b)
    {
        x=b;
    }
    else
    {
        x=a;
    }
    for (; x>=1; x--)
    {
        if(a%x==0&& b%x==0)
        {
            gcd=x;
            break;
        }
    }
    printf("\nGreatest Common Divisor of %d and %d is %d\n",a,b,gcd);

    getchar();
    return 0;
}
