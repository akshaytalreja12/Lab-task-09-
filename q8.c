#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr;
    int i;
    ptr = arr; 
    printf("Array elements are:\n");
    for ( i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    return 0;
}

