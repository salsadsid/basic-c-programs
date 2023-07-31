#include<stdio.h>

int main(){
    int numbers[5][5]= {{6,4,7,8,9},{3,7,1,9,9},{8,6,4,2,7},{2,4,2,5,9},{4,1,6,7,3}};
    int numbers2[5][5];
    int i,j;

    printf("Content of first array (numbers): \n");
    for (i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("%d  ", numbers[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            numbers2[i][j]=numbers[j][i];
        }
    }
    printf("Content of second array (numbers2): \n");
     for (i= 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            printf("%d  ", numbers2[i][j]);
        }
        printf("\n");
    }
    getchar();
}
