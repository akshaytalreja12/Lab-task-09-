#include <stdio.h>
void multiplyMatrices(int a[10][10], int b[10][10], int result[10][10], int r1, int c1, int c2);
void displayMatrix(int matrix[10][10], int row, int col);

int main() {
    int a[10][10], b[10][10], result[10][10];
    int r1, c1, r2, c2;
    int i, j;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);
    if (c1 != r2) {
        printf(" multiplication is not posssible!\n");
        return 0;
    }
    printf("ENter elements of first matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("EnTer elements of second matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    multiplyMatrices(a, b, result, r1, c1, c2);
    printf("\nResultant Matrix (A x B):\n");
    displayMatrix(result, r1, c2);

    return 0;
}
void multiplyMatrices(int a[10][10], int b[10][10], int result[10][10], int r1, int c1, int c2) {
    int i, j, k;
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}
void displayMatrix(int matrix[10][10], int row, int col) {
    int i, j;
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
}

