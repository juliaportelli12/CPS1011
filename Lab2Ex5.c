#include <stdio.h>

#define DAYS_IN_A_WEEK 7

void convert_to_weeks_and_days(int days) {
    int weeks = days/DAYS_IN_A_WEEK;
    int remaining_days = days%DAYS_IN_A_WEEK;
    printf("%d days is %d weeks and %d days.\n", days, weeks, remaining_days);
}

int main() {
    int days;

    for(int i = 0; i < 10; i++){
        printf("Enter number of days (%d/10): ", i+1);
        scanf("%d",&days);

        convert_to_weeks_and_days(days);
    }

    return 0;
}