#include<stdio.h>

int string_length(char str[]){
    int i;
    for(i=0;str[i]!='\0';i++){
        i++;
    }
    return i;
}

int main(){
    int length;
    char country[100];
    printf("Enter a word: ");
    while(1==scanf("%s",&country)){
        length=string_length(country);
        printf("length: %d\n", length);
    }
}
