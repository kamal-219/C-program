//transpose a matrix
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
    
   printf("now!!!\n");
    for(j=0;j<column;j++){
        for(i=0;i<row;i++){
          
            printf("%d ",a[i][j]);
        }
         printf("\n");
    }
   
       return 0;
}
