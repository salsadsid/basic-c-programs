#include <stdio.h>
int main(){

    int i=1;
    int a=5;

    printf("1 - 100 prime numbers: \n");
    while(i<100){
        i++;
        if(i%2==0){
            if(i==2){
                printf("%d ",i);
            }
            continue;
        }
        if(i%3==0){
                if(i==3){
                printf(" %d ",i);
            }
            continue;
        }
        if(i%5==0){
            if(i==5){
                printf(" %d ",i);
            }
            continue;
        }
        if(i%7==0){
            if(i==7){
                printf(" %d ",i);
            }
            continue;
        }

        printf(" %d ",i);
        a++;
    }
    return 0;
}
