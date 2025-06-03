// an efficient algorithm to find the only non-repeating number in an array.
#include <stdio.h>
int main (){
    int count;
    int a[]={3,4,5,4,8,6,3};
    int len=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<len;i++){
        count=0;
        for(int j=0;j<len;j++){
            if((i!=j)&&((a[i]^a[j]))==0){
                count++;
            }
        }
     if(count==0){
      printf("%d\n",a[i]);   
     }   
    }
    return 0;
}
