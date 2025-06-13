#include<stdio.h>
void after(int row,int column,int a[row][column]);
void after(int row,int column,int a[row][column]){
     printf("\n before transpose\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }
    
     printf("\n After transpose\n");
    for(int j=0;j<column;j++){
        for(int i=0;i<row;i++){
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }
  
}
int main(){
    int row,column;
    printf("enter no of rows= ");
    scanf("%d",&row);
    printf("\nenter no of column= ");
    scanf("%d",&column);
    
     int a[row][column];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            printf("enter row %d and column %d : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
   
    after(row,column,a);
    
}
