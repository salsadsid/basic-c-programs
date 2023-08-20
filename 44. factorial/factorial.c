#include <stdio.h>


int main(){
    int i,sum=1,j=13;
    for (i=1;i<=j;i++){
        sum=sum*i;
    }

    printf("%d factorial = %d",j,sum);
}
