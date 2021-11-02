#include <stdio.h>
int main() {
     int a = 10;
     int *p;
     p = &a;
     printf("Element = %d, Address = %d\n", *p, p);
     printf("Element = %d, Address = %d\n", *(p+1), p+1);
     int b = 20;
     int *q;
     q = &b;
     printf("Element = %d, Address = %d \n", *q, q);
     printf("Element = %d, Address = %d \n", *(q+1), q+1);

     char *r;
     r = (char*)p;
     printf("Element = %d, Address = %d \n", *r, r);
     printf("Element = %d, Address = %d \n", *(r+1), r+1);
return 0;
}