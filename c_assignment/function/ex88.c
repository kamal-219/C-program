#include <stdio.h>
int square(int x) { return x * x; }
void map(int *a, int n, int (*f)(int)) {
for (int i = 0; i < n; i++)
       	a[i] = f(a[i]);
}
int main() {
int arr[] = {1, 2, 3, 4};
int n = sizeof(arr)/sizeof(arr[0]);
map(arr, n, square);

for (int i = 0; i < n; i++) printf("%d ", arr[i]);
return 0;
}

