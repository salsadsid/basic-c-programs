#include<stdio.h>


int main()
{
    int decimal= 95,i,count=0,quodient,temp,j;
    int binary[100];
    for(i=0; quodient!=0; i++)
    {
//        printf("%d\n",decimal);
        if(decimal%2==1)
        {
            quodient=decimal/2;
//            printf("%d\n",quodient);
            decimal=quodient;
            binary[i]=1;
            count++;
        }
        else
        {
            quodient=decimal/2;
//            printf("%d\n",quodient);
            decimal=quodient;
            binary[i]=0;
            count++;
        }
    }
    int reversebinary[count];

//    printf("sas %d %d %d %d %d\n",binary[0],binary[1],binary[2],binary[3],count);

    for(i=0,j=count-1; i<count; i++,j--)

    {
        reversebinary[j]=binary[i];
    }

    for(i=0;i<count;i++){
        printf("%d ",reversebinary[i]);
    }
}
