#include <stdio.h>
#include <stdlib.h>
#define size 8
#define brightn 20
void generateImage(int image[size][size]);
void brightenImage(int original[size][size], int bright[size][size]);
void displayImage(int image[size][size], const char *title);
int main() {
    int original[size][size];
    int brightened[size][size];
    generateImage(original);
    brightenImage(original, brightened);
    displayImage(original, "Original Image");
    displayImage(brightened, "Brightened Image");
    return 0;
}
void generateImage(int image[size][size]) {
    int i, j;
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            image[i][j] = rand() % 256;
        }
    }
}
void brightenImage(int original[size][size], int bright[size][size]) {
    int i, j;
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            bright[i][j] = original[i][j] + brightn;
            if (bright[i][j] > 255)
                bright[i][j] = 255;  
        }
    }
}
void displayImage(int image[size][size], const char *title) {
    int i, j;
    printf("\n %s \n, title);
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("%4d", image[i][j]);
        }
        printf("\n");
    }
}

