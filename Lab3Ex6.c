#include <stdio.h>

int main(void)
{
    double income, tax = 0.0;
    int is_ict, green_disposal;

    printf("Enter your total income in euros: ");
    scanf("%lf", &income);

    printf("Are you working in the ICT industry? Enter 1 for Yes or 0 for No");
    scanf("%d", &is_ict);

    printf("Are you collecting old electronic equipment for green disposal? Enter 1 for Yes or 0 for No");
    scanf("%d", &green_disposal);

    double first_bracket = green_disposal ? 15000.0 : 10000.0;
    if (income <= first_bracket)
    {
        tax = income * 0.18;
    }
    else if (income <= first_bracket + 8000.0)
    {
        tax = first_bracket * 0.18 + (income - first_bracket) * 0.20;
    }
    else
    {
        tax = first_bracket * 0.18 + 8000.0 * 0.20 + (income - first_bracket - 8000.0) * 0.25;
    }

    // Apply ICT rebate if applicable
    if (is_ict)
    {
        tax *= 0.95;  // 5% rebate
    }

    // Output the total tax
    printf("Your total tax bill is €%.2f.\n", tax);

    return 0;
}