#include <stdio.h>
int main() {

    // int a = 10;
    // int *p = &a;
    // *p = 20;
    // int **q = &p;
    // int ***r = &q;
    // ***r = 30;
    // printf("%d\n", *p);
    // printf("%d\n", *q);
    // printf("%d\n", **q);
    // printf("%d\n", **r);
    // printf("%d\n", ***r);

//  Pointer Artthemetic 

    int a = 10;
    int *p;
    p = &a;
    *p = *p + 1;
    printf("%d\n", *p);   // OUTPUT = 11
 
    int b = 20;
    int *q;
    q = &b;
    *q = *q + *p;
    printf("%d\n", *q);   // OUTPUT = 31


return 0;
}