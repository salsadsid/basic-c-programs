#include <stdio.h>
int main()
{
    int a,b,x,t,gcd;

    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    if(a==0) gcd=a;
    else if(b==0) gcd=b;
    else{
        while(b!=0){
            t=b;
            b=a%b;
            a=t;
        }
        gcd=a;
    }
    printf("\nGreatest Common Divisor : %d\n",gcd);
}
