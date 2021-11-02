#include <stdio.h>
int main() {
     int a = 10;
     int *p;
     p = &a;
     printf("The Address of a is %d\n", p);
     printf("The Value at Address p is %d\n", *p);
return 0;
}