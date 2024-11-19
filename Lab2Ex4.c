#include <stdio.h>
#include <string.h>

#define MAX_ENTRIES 10
#define MAX_LENGTH 10

int main() {
    char name[MAX_ENTRIES][MAX_LENGTH + 1], surname[MAX_ENTRIES][MAX_LENGTH + 1];
    int age[MAX_ENTRIES], count = 0;
    float salary[MAX_ENTRIES], yearlyTotal, totalSalary = 0;

    while (count < MAX_ENTRIES) {
        printf("\nEntry %d:\n", count + 1);

        printf("Name: ");
        scanf("%s", name[count]);
        if (strlen(name[count]) > MAX_LENGTH) name[count][MAX_LENGTH] = '\0';  

        printf("Surname: ");
        scanf("%s", surname[count]);
        if (strlen(surname[count]) > MAX_LENGTH) surname[count][MAX_LENGTH] = '\0';  

        printf("Age: ");
        scanf("%d", &age[count]);

        printf("Monthly salary: ");
        scanf("%f", &salary[count]);

        yearlyTotal = salary[count] * 13;
        totalSalary += salary[count];

        // Display data for the entry
        printf("%3d %-10s %-10s %3d %10.2f %10.2f\n", 
               count + 1, name[count], surname[count], age[count], salary[count], yearlyTotal);

        count++;
    }

    printf("\nAverage monthly salary: %.2f\n", totalSalary / MAX_ENTRIES);
    return 0;
}
