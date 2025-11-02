#include <stdio.h>
 int factorial(int n) {
    if (n == 0)
      return 1;
    else
    return n * factorial(n - 1); 
}
int main() {
    int N;
    printf("Enter a non-negative integer: ");
    scanf("%d", &N);
    if (N < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("%d! = %lld\n", N, factorial(N));
    }

    return 0;
}

