#include <stdio.h>
void increament(int *a) {
    (*a) = (*a) + 20;
    printf("Element = %d, Address = %d\n", *a, &a);
}
int main() {
   int a = 10;
   increament(&a);
   printf("Element = %d, Address = %d\n", a, &a);
return 0;
}