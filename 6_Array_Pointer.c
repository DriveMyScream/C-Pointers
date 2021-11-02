#include <stdio.h>
int main() {
    // int a = 10;
    // int *p;
    // p = &a;
    // printf("Element a = %d, address = %d\n", a, &a);
    // printf("Element p = %d, address = %d\n", *p, &p);
    // printf("Element p = %d, address = %d\n", *p, *(p+1));
 
    int arr[5] = {10, 20, 30, 40, 50};
    int *p;
    p = &arr[0];
    // printf("Element = %d, Address = %d\n", *(p+0), (p+0));
    // printf("Element = %d, Address = %d\n", *(p+1), (p+1));
    // printf("Element = %d, Address = %d\n", *(p+2), (p+2));
    // printf("Element = %d, Address = %d\n", *(p+3), (p+3));
    // printf("Element = %d, Address = %d\n", *(p+4), (p+4));

    for(int i = 0; i<5; i++) {
        printf("Element = %d, Address = %d\n", *(p+i), (p+i));
    }


    
   
return 0;
}