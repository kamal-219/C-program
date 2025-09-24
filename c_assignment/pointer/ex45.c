//Implement strlen(), strcpy(), strcmp() using pointers.
#include<stdio.h>
#include<string.h>
int length(char *a);
int copy(char *a,int l);
int cmp(char *a,char b[],int l);
int main(){
	char a[]="kamal";

         int l=length(a);
	  printf("length= %d\n",l);
	 copy(a,l);
	 cmp(a,"kamal",l);
         
	
}
int length(char *a){
	int count=0;
	while(*a!='\0'){
		count++;
               *a++;
	}
	return count;
}
int copy(char *a,int l){
	char b[l];
	int i=0;
	while(*a!='\0'){
		
		b[i]=*(a+i);
		i++;
	}
	printf("copy= %s\n",b);
}
int cmp(char *a,char b[],int l){
	int i,k=0;
        int n=length(b);
        if(n!=l){
	 printf("not equal");
	}
        else{
		for(i=0;i<l;i++){
		if(a[i]!=b[i]){
                   printf("not equal");k=1;break;
               }
               	  
               }
		if(k==0){
			printf("equal");
		}
	}
}

