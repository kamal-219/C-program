//recursive palindrome check on string
#include<stdio.h>
#include<string.h>
int main(){
	char a[]="madam";
        int n=strlen(a);
	check(a,0,n-1);
	if(check(a,0,n-1)){
		printf("palindrome");
		}
	else{
		printf("not palindrome");
	}

}
int check(char *a,int s,int n){

      if(s>=n)return 1;
       
      if(a[s]!=a[n])return 0;

      return check(a,s+1,n-1);
      
}
