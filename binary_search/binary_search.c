#include<stdio.h>

int main()
{
    int ara[]= {1,4,14,97,123};
    int low_index=0;
    int high_index=5;
    int mid_index;
    int num=97;

    while(low_index<=high_index)
    {
        mid_index=(low_index+high_index)/2;
        if(num==ara[mid_index])
        {
            break;
        }
        else if(num > ara[mid_index])
        {
            low_index=mid_index+1;
        }
        else
        {
            high_index=mid_index-1;
        }
    }

    if(low_index>high_index)
    {
        printf("%d is not in the array\n", num);
    }
    else
    {
        printf("%d is found in the array. It is the %d th element of the array.\n", ara[mid_index], mid_index);
    }

}
