#include <stdio.h>
int main()
{
    int arr[]= {10,20,30,40,50,60,70,80,90};
    int i,j,temp;

    printf("Given Array : ");
    for (i=0; i<9; i++)
    {
        printf(" %d ",arr[i]);
    }
    for (i=0,j=8; i<9; i++,j--)
    {
        if(j==i)
        {
            break;
        }
        temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
    }
    printf("\n\nReverse Array:");
    for (i=0; i<9; i++)
    {
        printf(" %d ",arr[i]);
    }
    printf("\n");
    return 0;
}

