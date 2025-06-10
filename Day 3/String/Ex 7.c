//version of atoi() and itoa().
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int value;
	char str1[] = "257";
	value = atoi(str1);
	printf("string value = %s\n",str1);
	printf("integer value = %d\n",value);
	char str2[] = "silicon";
	value = atoi(str2);
	printf("string value = %s\n",str2);
	printf("integer value = %d\n",value);
	return 0;
}
