#include <stdio.h>

int main() {
    int input;
    printf("Enter an integer: ");
    scanf("%d", &input);
    printf("The character corresponding to %d is '%c'\n", input, input);
    return 0;
}
