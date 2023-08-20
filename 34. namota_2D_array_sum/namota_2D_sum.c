#include <stdio.h>

int main(){
    int number[10][10];
    int i,j,odd_count=0,even_count=0,sum=0;
    for (i=0;i<10;i++){
        for (j=0;j<10;j++){
            number[i][j]=(i+1)*(j+1);
        }
    }
    for (i=0;i<10;i++){
        for (j=0;j<10;j++){
            if(number[i][j]%2==0){
                even_count++;
            }else{
                odd_count++;
            }
            sum=sum+number[i][j];
        }
    }
    printf("odd count: %d , even count: %d \nsum: %d",odd_count,even_count,sum);
}

