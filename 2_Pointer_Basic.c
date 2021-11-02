#include <stdio.h>
int main() {
/*
//  Pointer Representation 
    int a = 10;
    int *p;
    p = &a;
    printf("The Address of a is %d\n", p);
    printf("The Value at Address p is %d\n", *p);
    printf("The Address of a is %d\n", &a);

//  Modify The Value 
    *p = 20;
    printf("The Value at Address of P is %d\n", a);
    printf("The Address of A is %d\n", &a);  */

//  Pointer Arithemetic 
    int a = 10;
    int *p;
    p = &a;
    p = p + 1;
    *(p+1) = 30;
    printf("The New Address of P is %d\n", p);
    printf("The Value At New Address P is %d\n", *(p+1));
    // p = p + 2;
    // *p = 40;
    // printf("The New Address of P is %d\n", p);
    // printf("The Value At New Address P is %d\n", *p);

return 0;
}