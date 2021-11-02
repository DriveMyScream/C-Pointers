#include <stdio.h>
void print() {
    printf("Hello Shubham\n");
}
int *add(int *a, int *b) {
    int c = (*a) + (*b);
    return &c;
}
int main() {
     int a = 10, b = 20;
     int *ptr = add(&a, &b);
     print();
     printf("sum = %d\n", *ptr);
return 0;
}