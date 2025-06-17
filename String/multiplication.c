#include <stdio.h>

int main(){
  char x[50],y[50]; 
  scanf("%s %s",x,y);
  int a[50],b[50];
 
  for(int i=0;i<50;i++){
      a[50-i-1]=x[i]-'0';
  }
  for(int i=0;i<50;i++){
      b[50-i-1]=y[i]-'0';
  }

  int ans[100]={0};
  //multiplication
  for(int i=0;i<50;i++){
   for(int j=0;j<50;j++){
     ans[i+j]+=a[i]*b[j];
   }
  }

  //carry
  for(int i=0;i<99;i++){
   ans[i+1] += ans[i]/10;
   ans[i] %= 10;
  }
 
  for(int i=99;i>=0;i--){
 
  printf("%d",ans[i]);
   
  }
  printf("\n");
 

}
