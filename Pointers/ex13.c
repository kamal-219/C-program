// Reallocation for Growing Array
#include <stdio.h>
#include<stdlib.h>
int main() {
    int **a;
    int r,c,i,j;
    printf("rows= ");scanf("%d",&r);
    printf("column= ");scanf("%d",&c);
    a=(int**)malloc(r*sizeof(int*));
    for(i=0;i<r;i++){
        a[i]=(int *)malloc(c * sizeof(int));
    }
    
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("\nrow %d  and column %d= ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    int nr;
    printf("nr= ");
    scanf("%d",&nr);
    a=(int**)realloc(a,nr*sizeof(int*));
    for(i=r;i<nr;i++){
        a[i]=(int *)malloc(c * sizeof(int));
    }
    
     for(i=0;i<nr;i++){
        for(j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < nr; i++) {
        free(a[i]);
    }
    free(a);
    return 0;
}
