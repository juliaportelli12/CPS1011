#include <stdio.h>
#include <string.h>
#include <ctype.h>

void process_string(char *input) {
    int length = strlen(input);
    int freq[256] = {0}; 
    char most_frequent = '\0';
    int max_freq = 0;

    for (int i = 0; i < length; i++) {
        if (isdigit(input[i])) {
            printf("Input is invalid (contains numeric characters).\n");
            return;
        }
        freq[(unsigned char)input[i]]++; 
    }

    for (int i = 0; i < 256; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            most_frequent = (char)i;
        }
    }

    printf("Input is valid.\n");
    printf("Input length: %d\n", length);
    if (length > 0) {
        printf("Input's first character: %c\n", input[0]);
        printf("Input's most frequent character: %c\n", most_frequent);
    } else {
        printf("Input is empty. No first character or most frequent character.\n");
    }
}

int main() {
    char input[100]; 

    printf("Enter a sequence of strings, type EXIT to stop:\n");

    while (1) {
        printf("\nEnter a string: ");
        scanf("%s", input); 

        if (strcmp(input, "exit") == 0) {
            break;
        }

        process_string(input);
    }

    printf("Program ended.\n");
    return 0;
}
