#include<stdio.h>
int main()
{
    double a,b,result;
    char operator;
    printf("Enter a integer/double: ");
    scanf("%lf",&a);
    printf("Enter an operator |+,-,*,/| : ");
    scanf(" %c",&operator);
    printf("Enter another integer/double: ");
    scanf("%lf",&b);

    if(operator=='+')
    {
        printf("\nExpression: %0.2lf %c %0.2lf = %0.2lf\n",a,operator,b,result=a+b);
        printf("\nThank Yoou!!!!!");
    }
    else if(operator=='-')
    {
        printf("\nExpression:%0.2lf %c %0.2lf = %0.2lf\n",a,operator,b,result=a-b);
        printf("\nThank Yoou!!!!!");
    }
    else if(operator=='*')
    {
        printf("\nExpression:%0.2lf %c %0.2lf = %0.2lf\n",a,operator,b,result=a*b);
        printf("\nThank Yoou!!!!!");
    }
    else if(operator=='/')
    {
        printf("\nExpression:%0.2lf %c %0.2lf = %0.2lf\n",a,operator,b,result=a/b);
        printf("\nThank Yoou!!!!!");
    }
    else
    {
        printf("\n%c is not a valid operator\n",operator);
        printf("\nThank Yoou!!!!!");
    }


    getchar();

    return 0;
}





