#include <stdio.h>
int total;
int square(int a) {
    return a*a;
}
int squareOfSum(int a, int b) {
    int z = square(a+b);
    return z;
}
int main() {
    int a = 10, b = 20;
    total = squareOfSum(a, b);
    printf("OUTPUT = %d\n", total);
return 0;
}