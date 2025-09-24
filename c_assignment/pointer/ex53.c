#include<stdio.h>
#include<string.h>
void palindrome(char *s,int l);
int main(){
  char a[]="madam";
  int l=strlen(a);
  palindrome(a,l);
}
void palindrome(char *s,int l){
	int i;
	char b[i];
	for(i=0;i<l;i++){
		b[i]=*(s+(l-1-i));
		if(b[i]==*(s+i)){
			printf("yes");break;
		}
		else{
			printf("no");
		}

	}
	
}

