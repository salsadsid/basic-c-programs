#include<stdio.h>


int main(){
    int ara[20]={2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int ara2[20];
    int length=19,i,j;

    for (i=0;i<length;i++){
        ara2[i]=1;
    }


    for(j=0;j<3;j++){
        for(i=0;i<length;i++){
            if(ara[i]%ara[j]==0){
                ara2[i]=0;
            }
        }
    }
    ara2[0]=1;
    ara2[1]=1;
    for (i=0;i<length;i++){
        if(ara2[i]==1){
            printf("%d is prime.\n",ara[i]);
        }else{
        printf("%d is not prime.\n",ara[i]);
        }
    }
}
