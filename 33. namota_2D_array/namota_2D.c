#include <stdio.h>

int main(){
    int number[10][10];
    int i,j;
    for (i=0;i<10;i++){
        for (j=0;j<10;j++){
            number[i][j]=(i+1)*(j+1);
        }
    }
    for (i=0;i<10;i++){
        for (j=0;j<10;j++){
            printf("%d X %d = %d\n",(i+1),(j+1),number[i][j]);
        }
        printf("\n");
    }
}
