#include <stdio.h>

int main()
{
    int ara1[]= {3,1,2,5,10};
    int ara2[5];

    int i, minimum, index_2, minimum_index,temp;

    for(index_2=0; index_2<5; index_2++)
    {
        minimum = 10000;
        for(i=index_2; i<5; i++)
        {
            if(ara1[i]<minimum)
            {
                minimum=ara1[i];
                minimum_index=i;
            }
        }
        temp= ara1[index_2];
        ara1[index_2]=minimum;
        ara1[minimum_index]=temp;
    }

    for(i=0; i<5; i++)
    {
        printf("%d\n",ara1[i]);
    }
}
