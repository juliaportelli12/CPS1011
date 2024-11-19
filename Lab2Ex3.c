#include <stdio.h>

int main() {
    char word1[50], word2[50], word3[50];

    printf("Enter first word: ");
    scanf("%s", word1);
    printf("Enter second word: ");
    scanf("%s", word2);
    printf("Enter third word: ");
    scanf("%s", word3);

    printf("Here are the words printed in reverse order:\n");
    printf("%s\n", strrev(word1));
    printf("%s\n", strrev(word2));
    printf("%s\n", strrev(word3));

    return 0;
}