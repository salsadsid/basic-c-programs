#include<stdio.h>

int main()
{
    int i,j,k;
    for(i=1; i<11; i++)
    {
        for(k=0; k<i; k++)
        {
            printf(" ");
        }
        for(j=11-k; j>0; j--)
        {
            printf("c");
        }

        printf("\n");
    }
    for(i=10; i>0; i--)
    {
        for(k=i; k>0; k--)
        {
            printf(" ");
        }
//        printf("(%d i, %d k)",i,k);
        for(j=1; j<12-i; j++)
        {
            printf("c");
        }

        printf("\n");
    }
}
