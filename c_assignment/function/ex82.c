#include <stdio.h>
int gcd_ptr(int *a, int *b) {
if (*b == 0) return *a;
int r = *a % *b;
int aa = *b, bb = r;
return gcd_ptr(&aa, &bb);
}
int main() {
int x = 48, y = 18;
int result = gcd_ptr(&x, &y);
printf(" %d\n", result);
return 0;
}
