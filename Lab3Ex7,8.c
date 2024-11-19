#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char word[100];
    int errors = 0;

    printf("Enter text (Ctrl+D or EOF to finish):\n");

    while (scanf("%s", word) != EOF) {
        if (!isalpha(word[0])) {
            printf("Warning: '%s' starts with a non-alphabetic character.\n", word);
            errors++;
        }

        for (int i = 1; word[i] != '\0'; i++) {
            if (isupper(word[i])) {
                printf("Warning: '%s' contains uppercase letters beyond the first character.\n", word);
                errors++;
                break;
            }
        }

        if (strlen(word) > 10 && strchr(word, '-') == NULL) {
            printf("Warning: '%s' is longer than 10 characters and has no hyphen.\n", word);
            errors++;
        }
    }
    
    if (errors == 0) {
        printf("No errors found.\n");
    } else if (errors == 1) {
        printf("1 error found.\n");
    } else {
        printf("%d errors found.\n", errors);
    }

    return 0;
}
