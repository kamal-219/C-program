#include <stdio.h>
void reverse_array_recursive(int *a, int l, int r) {
if (l >= r) return;
int temp = a[l];
a[l] = a[r];
a[r] = temp;
reverse_array_recursive(a, l + 1, r - 1);
}
int main() {
int arr[] = {1, 2, 3, 4, 5};
int n = sizeof(arr) / sizeof(arr[0]);
reverse_array_recursive(arr, 0, n - 1);
printf("Reversed array: ");
for (int i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
return 0;
}
