#include <stdio.h>
int main(){
    int marks[6]={90,91,92,93,94,95};
    int student_marks[11]={90,90,95,94,94,92,90,93,91,91,95};

    int i,j,k,count[10];
    for (i=0;i<6;i++){
            k=0;
        for(j=0;j<11;j++){
                if(student_marks[j]==marks[i]){
                    k++;
                }
        }
                printf("Marks : %d , Count : %d\n",marks[i],k);
    }
    return 0;
}
