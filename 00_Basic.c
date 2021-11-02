#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *ptr;
};
int main() {
    struct Node *head;
    head = (struct Node *) malloc(sizeof(struct Node));
    printf("Address = %d\n", head);
    printf("Address = %d\n", *head);
    printf("Address = %d\n", &head);
    printf("\n");

    int arr[] = {10, 20, 30, 40, 50};
    printf("Address = %d\n", arr);
    printf("Address = %d\n", *arr);
    printf("Address = %d\n", &arr[0]);
    printf("Address = %d\n", arr+1);
    printf("Address = %d\n", *(arr+1));
return 0;
}