#include <stdio.h>

#define EXCHANGE_RATE 0.95

int main() {
    float dollars, euros;

    for (int i = 0; i < 10; i++) {
        printf("Enter amount in dollars: ");
        scanf("%f", &dollars);

        euros = dollars * EXCHANGE_RATE;
        printf("$%.2f is equivalent to €%.2f\n", dollars, euros);
    }
    return 0;
}
