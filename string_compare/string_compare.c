#include<stdio.h>

int string_length(char a[]){
    int i,length=0;
    for (i=0;a[i]!='\0';i++){
        length++;
    }
    return length;
}

int string_compare(char a[],char b[]){
    int i,j;
    for(i=0;a[i]!='\0' && b[i]!='\0';i++){
        if(a[i]<b[i]){
            return -1;
        }
        if(a[i]>b[i]){
            return 1;
        }
    }
    if(string_length(a)==string_length(b)){
        return 0;
    }
    if(string_length(a)<string_length(b)){
        return -1;
    }
    if(string_length(a)>string_length(b)){
        return 1;
    }
}

int main(){
    char a[100];
    char b[100];
    printf("Enter First String: ");
    scanf("%s",a);
    printf("\nEnter Second String: ");
    scanf("%s",b);
    int result;
    result= string_compare(a,b);
    if(result ==1){
         printf("\nFirst is bigger(alphabetical ordering)\n");
    }
    else if(result ==-1){
         printf("\nSecond is bigger(alphabetical ordering)\n");
    }
    else {
         printf("\nTwo String are equal(alphabetical ordering)\n");
    }

//    following code also compare string if the string length is equal
    /*
    int i,j;
    for (i=0,j=0;i<3;i++,j++){
        if(a[i]>b[i]){
            printf("A is bigger");
            break;
        }else if(a[i]==b[i] && i!=2){
            continue;
        }else if(a[i]==b[i] && i==2){
            printf("a and b is equal");
        }else{
            printf("b is bigger");
            break;
        }
    }
    */
}
