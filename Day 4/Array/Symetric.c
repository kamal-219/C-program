//Symmetric or Not symmetric
#include <stdio.h>

int main() {
    int i,j,row,column;
    
    printf("Enter number of rows and columns : ");
    scanf("%d%d", &row,&column);
    int a[row][column];
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("enter row %d and column %d ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf(" %d " ,a[i][j]);
        }
        printf("\n");
    }
     int value=0;
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            
            if(a[i][j]!=a[j][i]){
               value=1;
               break;
            }
        }
    }  
    if(value==0){
        printf("this is symmetric");
    }
    else{
        printf("Not symmetric ");
    }
       return 0;
}
