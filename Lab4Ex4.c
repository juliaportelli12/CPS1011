#include <stdio.h>
#include <string.h>

void decimal_to_hex(int n) {
    if (n == 0) return; 

    int rem = n % 16;
    decimal_to_hex(n / 16); 

    if (rem < 10)
        printf("%d", rem); 
    else
        printf("%c", 'A' + (rem - 10)); 
}

void reverse_string(char str[], int start, int end) {
    if (start >= end) return; 

    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    reverse_string(str, start + 1, end - 1);
}

int main() {

    int decimal = 254;
    printf("Hexadecimal of %d: ", decimal);
    decimal_to_hex(decimal);
    printf("\n");

    char str[] = "hello";
    printf("Original string: %s\n", str);

    reverse_string(str, 0, strlen(str) - 1);
    printf("Reversed string: %s\n", str);

    return 0;
}
