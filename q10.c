#include <stdio.h>
int findHCF(int a, int b);
int findLCM(int a, int b);
int main() {
    int num1, num2, choice, result;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("\nChoose an option:\n");
    printf("1. HCF (Highest Common Factor)\n");
    printf("2. LCM (Least Common Multiple)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice == 1) {
        result = findHCF(num1, num2);
        printf("\nHCF of %d and %d = %d\n", num1, num2, result);
    }
    else if (choice == 2) {
        result = findLCM(num1, num2);
        printf("\nLCM of %d and %d = %d\n", num1, num2, result);
    }
    else {
        printf("\nInvalid choice! Please enter 1 or 2.\n");
    }
    return 0;
}
int findHCF(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int findLCM(int a, int b) {
    int hcf = findHCF(a, b);
    return (a * b) / hcf;
}

