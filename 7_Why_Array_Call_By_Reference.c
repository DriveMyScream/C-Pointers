#include <stdio.h>
int sumOfNumber(int *arr) {
    int sum = 0;
    int size = sizeof(arr)/sizeof(int);
    for(int i=0; i<size; i++) {
        sum = sum + arr[i];
    }
    printf("SOE - size of arr = %d, size of arr[0] = %d\n", sizeof(arr), sizeof(arr[0]));
    return sum;
}
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int result = sumOfNumber(arr);
    printf("Sum Of Element is %d\n", result);
    printf("SOE - size of arr = %d, size of arr[0] = %d\n", sizeof(arr), sizeof(arr[0]));
return 0;
}