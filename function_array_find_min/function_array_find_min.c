#include<stdio.h>

int smallest_number(int arr[],int arr_length){
    int i,smallest=arr[0];
    for (i=0;i<arr_length ; i++){
        if(arr[i]<smallest){
           smallest=arr[i];
        }
    }
    return smallest;
}

int main(){
    int arr[]={10,-15,50,78,56,95,132,215};
    int arr_length=7,smallest,i;
    printf("Given Array: ");
    for(i=0;i<8;i++){
        printf("%d ",arr[i]);
    }
    smallest=smallest_number(arr,arr_length);
    printf("\n \nSmallest : %d \n",smallest);
    return 0;
}

