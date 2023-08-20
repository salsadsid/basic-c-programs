#include<stdio.h>

int main()
{
    char nam[100]="mfallafm";
    int i,j,count=4,count2=0;
    for (i=0,j=7; i<8; i++,j--)
    {
//    printf("nam %c\n",nam[i]);
        if(i==j)
        {
            break;
        }
        if(i>j){
            break;
        }
        if(nam[i]==nam[j])
        {
//            printf("true %c ,%c",nam[i],nam[j]);
            count2++;
        }


    }
    if(count==count2)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
