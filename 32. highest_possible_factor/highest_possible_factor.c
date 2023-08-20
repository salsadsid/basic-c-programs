#include<stdio.h>
#include<math.h>

int largest_factor(int n){
    int i,root;
//    if(n<2){
//        return 0;
//    }
////    if(n==0){
////        return 1;
////    }
//    if(n==2){
//        return 1;
//    }
//    if(n%2==0){
//        return n/2;
//    }
    root= sqrt(n);
//    printf("%d\n",root);
    int j=1;
    for(i=3;i<=root;i=i+2){
        if(n%i==0){
            if(i>j){
                j=i;
                break;
            }
        }
//        else{
//            return 1;
//        }
    }
    return n/j;
//    return 1;
}

int main(){
    int n;
    while(1){
        printf("Please enter a number (enter 0 to exit): ");
        scanf("%d",&n);
        if(n==0){
            break;
        }
        int a= largest_factor(n);
        printf("\n%d\n",a);
//        if(1==is_prime(n)){
//            printf("%d is a prime number.\n", n);
//        }
//        else{
//            printf("%d is not a prime number.\n", n);
//        }
    }
    return 0;
}


