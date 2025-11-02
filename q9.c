#include <stdio.h>
float calcItemTotal(int quantity, float price);
int main() {
    char customerName[50];
    int numItems;
    printf("Enter customer name: ");
    gets(customerName);
    printf("Enter number of items purchased: ");
    scanf("%d", &numItems);
    char itemName[50];
    int quantity;
    float price, total = 0.0, itemTotal;
    int i;
    for (i = 0; i < numItems; i++) {
        printf("\nEnter name of item %d: ", i + 1);
        scanf("%s", itemName);
        printf("Enter quantity of %s: ", itemName);
        scanf("%d", &quantity);
        printf("Enter price per unit of %s: ", itemName);
        scanf("%f", &price);
        itemTotal = calcItemTotal(quantity, price);
        printf("Total for %s: %.2f\n", itemName, itemTotal);
        total += itemTotal;
    }
    printf("\nCustomer Name: %s\n", customerName);
    printf("Total Bill Amount: %.2f\n", total);
    return 0;
}
float calcItemTotal(int quantity, float price) {
    return quantity * price;
}

