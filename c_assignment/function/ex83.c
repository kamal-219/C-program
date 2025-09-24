#include <stdio.h>
int ascending(int a, int b) { return a > b; }

void generic_sort(int *arr, int n, int (*cmp)(int, int)) {
for (int i = 0; i < n - 1; i++) {
for (int j = 0; j < n - 1 - i; j++) {
if (cmp(arr[j], arr[j + 1])) {
int temp = arr[j];
arr[j] = arr[j + 1];
arr[j + 1] = temp;
}
}
}
}
int main() {
int arr[] = {5, 2, 8, 1, 4};
int n = sizeof(arr) / sizeof(arr[0]);
printf("Original array: ");
for (int i = 0; i < n; i++) printf("%d ", arr[i]);
printf("\n");
generic_sort(arr, n, ascending);
printf("Sorted ascending: ");
for (int i = 0; i < n; i++) printf("%d ", arr[i]);
printf("\n");
return 0;
}
