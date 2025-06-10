#include<stdio.h>
int main(){
char a[2][3]={{'A','B','C'},{'D','E','F'}};
int row=sizeof(a)/sizeof(a[0]);
int col=sizeof(a[0])/sizeof(a[0][0]);
int x=0,m[row*col];

for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        m[x++]=a[i][j];
        
    }
}

for(int i=0;i<row*col;i++){
   
      printf("%c ",m[i]);
   
}

return 0;
}
