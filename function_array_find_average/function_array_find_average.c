#include<stdio.h>

int find_average(int arr[],int arr_length){
    int i,sum=0;
    for (i=0;i<arr_length ; i++){
        sum=sum+arr[i];
    }
    return sum/arr_length;
}

int main(){
    int arr[]={10,-15,50,78,56,95,132,215};
    int arr_length=7,average,i;
    printf("Given Array: ");
    for(i=0;i<8;i++){
        printf("%d ",arr[i]);
    }
    average=find_average(arr,arr_length);
    printf("\n \nAverage : %d \n",average);
    return 0;
}

