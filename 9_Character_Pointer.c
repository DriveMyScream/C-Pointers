#include <stdio.h>
void print(char *arr) {
    while(*arr != '\0') {
        printf("%c", *arr);
        arr++;
    }
    printf("\n");
}
int main() {
    char arr[] = "Shubham";
    print(arr);
return 0;
}