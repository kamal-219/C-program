#include<stdio.h>
#include<string.h>
void reverse(char *a,int start,int n);
void reverse(char *a,int start,int n){
	if(start>=n)return ;
	char temp=a[start];
	a[start]=a[n];
	a[n]=a[start];
	reverse(a,start+1,n-1);
}


int main(){
        char a[]="kamal";
        int n=strlen(a);
	reverse(a,0,n-1);
	printf("%s ",a);
}
