#include<stdio.h>

int main(){

    int i,j,k;
    for(i=1;i<11;i++){
        for(j=0;j<i;j++){
            printf("c");
        }
//        printf("j = %d ",j);
        for(k=20-(j*2);k>0;k--){
            printf(" ");
        }
         for(j=1;j<=i;j++){
            printf("c");
        }
        printf("\n");
    }
}
