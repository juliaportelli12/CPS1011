#include <stdio.h>

// Function prototypes
void butler(const char *name);
void add(int a, int b);
void subtract(int a, int b);
void multiply(int a, int b);
void inventory_program();

int main(void) {
    int feet, fathoms, dogs, cats, totalPets;

    fathoms = 2; 
    feet = 6 * fathoms; 

    printf("There are %d feet in %d fathoms!\n", feet, fathoms);
    printf("Yes, I said %d feet!\n", 6 * fathoms);

    printf("Enter the number of dogs you have: ");
    scanf("%d", &dogs); 

    printf("Enter the number of cats you have: ");
    scanf("%d", &cats); 

    totalPets = dogs + cats; 
    printf("You have a total of %d pets.\n", totalPets);

    butler("John");

    add(5, 3);
    subtract(5, 3);
    multiply(5, 3);

    inventory_program();

    return 0;
}

void butler(const char *name) {
    printf("Hello, %s! How may I assist you today?\n", name);
}

void add(int a, int b) {
    printf("Addition: %d + %d = %d\n", a, b, a + b);
}

void subtract(int a, int b) {
    printf("Subtraction: %d - %d = %d\n", a, b, a - b);
}

void multiply(int a, int b) {
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);
}

void inventory_program() {
    int stockA3 = 1000, stockA4 = 1000, stockA5 = 1000; 
    int orderA3, orderA4, orderA5;

    printf("Inventory Program\n");
    printf("Enter the number of A3 packs to order (max 1000): ");
    scanf("%d", &orderA3); 

    printf("Enter the number of A4 packs to order (max 1000): ");
    scanf("%d", &orderA4); 

    printf("Enter the number of A5 packs to order (max 1000): ");
    scanf("%d", &orderA5); 

    if (orderA3 > 1000 || orderA4 > 1000 || orderA5 > 1000) {
        printf("Order limit exceeded! Each size can only order up to 1000 packs.\n");
        return;
    }

    stockA3 -= orderA3; 
    stockA4 -= orderA4; 
    stockA5 -= orderA5; 

    printf("\nOrder Details:\n");
    printf("A3 packs ordered: %d\n", orderA3);
    printf("A4 packs ordered: %d\n", orderA4);
    printf("A5 packs ordered: %d\n", orderA5);

    printf("\nUpdated Stock:\n");
    printf("A3 stock: %d\n", stockA3);
    printf("A4 stock: %d\n", stockA4);
    printf("A5 stock: %d\n", stockA5);
}

