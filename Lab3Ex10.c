#include <stdio.h>

#define MAX_ITEMS 5

// Structure to store product details
typedef struct {
    char name[50];
    float price;
} Item;

void show_menu();
void add_to_cart(Item shop_items[], int *cart_count, float *total);
void show_total(float total);
void checkout(float total);
void cancel_session();

int main() {
    Item shop_items[MAX_ITEMS] = {
        {"Milk", 1.50},
        {"Bread", 2.20},
        {"Cheese", 2.00},
        {"Apple", 0.50},
        {"Banana", 0.99}
    };

    float total = 0.0;  // Total price of items
    int cart_count = 0;  // Count of items in the cart
    char option;

    while (1) {
        show_menu();
        printf("Select an option: ");
        option = getchar();
        getchar();  // Consume the newline character left by getchar()

        if (option == '1') {
            add_to_cart(shop_items, &cart_count, &total);
        } else if (option == '2') {
            show_total(total);
        } else if (option == '3') {
            checkout(total);
            total = 0.0;  // Reset total after checkout
        } else if (option == '4') {
            cancel_session();
            total = 0.0;  // Reset total after cancel
        } else if (option == 'q') {
            printf("Are you sure you want to quit? (y/n): ");
            if (getchar() == 'y') {
                break;
            }
            getchar();  // Consume the newline character
        } else {
            printf("Invalid option. Try again.\n");
        }
    }

    return 0;
}

void show_menu() {
    printf("\n-- Shopping Cart Menu --\n");
    printf("1. Add items to shopping cart\n");
    printf("2. Show current total\n");
    printf("3. Check out\n");
    printf("4. Cancel session\n");
    printf("q. Quit\n");
}

void add_to_cart(Item shop_items[], int *cart_count, float *total) {
    int choice, quantity;

    printf("\nAvailable items:\n");
    for (int i = 0; i < MAX_ITEMS; i++) {
        printf("%d. %s - $%.2f\n", i + 1, shop_items[i].name, shop_items[i].price);
    }

    printf("Enter item number (1-5): ");
    scanf("%d", &choice);

    if (choice < 1 || choice > 5) {
        printf("Invalid item choice.\n");
        return;
    }

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    *total += shop_items[choice - 1].price * quantity;
    printf("Added %d x %s. Total: $%.2f\n", quantity, shop_items[choice - 1].name, *total);
}

void show_total(float total) {
    printf("\nCurrent total: $%.2f\n", total);
}

void checkout(float total) {
    printf("\nChecking out. Total: $%.2f\n", total);
    printf("Thank you for your purchase!\n");
}

void cancel_session() {
    printf("\nSession cancelled. Starting fresh.\n");
}
