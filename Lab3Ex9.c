#include <stdio.h>

#define MIN_RANGE -100.0
#define MAX_RANGE 100.0

int main() {
    FILE *input_file, *output_file;
    double number;

    input_file = fopen("input.txt", "r");
    if (input_file == NULL) {
        printf("Error opening input file.\n");
        return 1;
    }

    output_file = fopen("output.txt", "w");
    if (output_file == NULL) {
        printf("Error opening output file.\n");
        fclose(input_file);
        return 1;
    }

    while (fscanf(input_file, "%lf", &number) == 1) {
        if (number >= MIN_RANGE && number <= MAX_RANGE) {
            fprintf(output_file, "%.2f\n", number);
        } else {
            printf("Number %.2f is out of range and will not be copied.\n", number);
        }
    }

    fclose(input_file);
    fclose(output_file);

    printf("Processing complete.\n");

    return 0;
}
