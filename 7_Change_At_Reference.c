#include <stdio.h>
void value(int *A, int size) {
    for(int i=0; i<size; i++) {
        A[i] = 2 * A[i];  
        }
}
int main() {
   int A[] = {1, 2, 3, 4, 5};
   int size = sizeof(A)/sizeof(int);
   value(A, size);
   for(int i=0; i<size; i++) {
       printf("%d, ", A[i]);
   }
return 0;
}