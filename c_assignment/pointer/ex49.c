//Write function to find frequency of characters in a string using pointer walking.
#include<stdio.h>
#include<string.h>
void freq(char *a,int l);
int main(){
	char a[]="kamal";
        int l= strlen(a);
	freq(a,l);
}
void freq(char *a,int l){
	int i,j,x;
        

	for(i=0;i<l;i++){
		x=1;
		if(*(a+i)=='\0')continue;
		for(j=i+1;j<l;j++){
			if(*(a+i)==*(a+j)){
				x++;
		*(a+j)='\0';
			}
			
		}

		printf("%c =%d\n",*(a+i),x);
        
	
	}
	
}



		



