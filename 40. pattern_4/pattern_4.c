#include <stdio.h>

int main()
{
    int i,j,k;

    for (i=1; i<11; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("c");
        }
        printf("\n");
    }
    for(i=9; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf("c");
        }
        printf("\n");
    }

}
