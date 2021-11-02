#include <stdio.h>
void print(int *arr, int size) {
    while(*arr != size) {
        printf("Element = %d\n", *arr);
        arr++;
    }
}
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr)/sizeof(int);
    print(arr, size);
return 0;
}