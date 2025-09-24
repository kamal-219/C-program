#include <stdio.h>
int sum(int a, int b) {
       	return a + b;
}
int reduce(int *a, int n, int (*f)(int,int)) {
int res = a[0];
for (int i = 1; i < n; i++)
       	res = f(res, a[i]);
return res;
}
int main() {
int arr[] = {1, 2, 3, 4, 5};
int n = sizeof(arr)/sizeof(arr[0]);
printf("Reduced sum: %d\n", reduce(arr, n, sum));
return 0;
}
