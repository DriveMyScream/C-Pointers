#include <stdio.h>
#include <string.h>
void print(char *B) {
    int i = 0;
    while(B[i] != '\0') {
        printf("%c", B[i]);
        i++;
    }
    printf("\n");
}
int main() {
    char A[7];
    A[0] = 'S';
    A[1] = 'H';
    A[2] = 'U';
    A[3] = 'B';
    A[4] = 'H';
    A[5] = 'A';
    A[6] = 'M';
    A[7] = '\0';
    printf("%s\n", A);
    int length = strlen(A);
    printf("The Length Of String is %d\n", length);

    char B[] = "SHUBHAM";
    printf("The Size of char Array in Bytes is %d\n", sizeof(B));
    int length1 = strlen(B);
    printf("The Length of char Array is %d\n", length1);
    printf("%s\n", B);

    print(B);
return 0;
}