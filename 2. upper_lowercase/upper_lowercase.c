#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a letter : ");
    scanf("%c",&ch);
    if(ch>='a' && ch <='z')
    {
        printf("\n%c : lowercase\n",ch);
    }
    else if(ch>='A' && ch <='Z')
    {
        printf("\n%c : uppercase\n",ch);
    }
    else{
        printf("\n%c : Number/Symbol\n",ch);
    }
}

