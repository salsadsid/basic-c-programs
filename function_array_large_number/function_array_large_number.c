#include<stdio.h>

int largest_number(int arr[],int arr_length){
    int i,largest=arr[0];
    for (i=0;i<arr_length ; i++){
        if(arr[i]>largest){
           largest=arr[i];
        }
    }
    return largest;
}

int main(){
    int arr[]={10,50,78,56,95,132,215,216};
    int arr_length=8,largest,i;
    printf("Given Array: ");
    for(i=0;i<8;i++){
        printf("%d ",arr[i]);
    }
    largest=largest_number(arr,arr_length);
    printf("\nlargest: %d\n",largest);
    return 0;
}
