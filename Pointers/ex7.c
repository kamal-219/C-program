//Given a square matrix, find the sum of its main diagonal elements using pointer arithmetic.
#include<stdio.h>
int main(){
    int a[5][5]={{4,5,7,8,9},{2,6,3,5,6},{4,5,7,8,9},{4,5,7,8,9},{2,6,3,5,6}};
    int i,j,sum=0;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%d  ",a[i][j]);
                       if(i==j){
                sum+=*(*(a+i)+j);
            }
        }
        printf("\n");
    }
     printf("----------\n");
    printf("%d",sum);
}
