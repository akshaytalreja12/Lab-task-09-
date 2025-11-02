#include <stdio.h>
void decToBin(int *decimal) {
    int binary[32]; 
    int i = 0;
    int num = *decimal;
    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }
    printf("Binary of %d is: ", *decimal);
    int j;
    for ( j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}
int main() {
    int decimal;
    printf("Enter the decimal access code: ");
    scanf("%d", &decimal);
    decToBin(&decimal);
    return 0;
}

