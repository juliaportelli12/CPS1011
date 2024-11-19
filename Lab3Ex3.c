#include <stdio.h>
#define PIN 1234  
#define MAX_ATTEMPTS 5

int main(void)
{
    int enterPin;
    int attempts = 0;
    int correct = 0;

    printf("Please enter the 4-digit PIN.\n");

    while(attempts < MAX_ATTEMPTS)
    {
        printf("Atttempt %d%d: Enter your PIN: ", attempts+1, MAX_ATTEMPTS);
        scanf("%d", &enterPin);

        if(enterPin == PIN)
        {
            correct = 1;
            break;
        }
        else
        {
            printf("Incorrect PIN.\n");
        }

        attempts++;
    }

    if(correct)
    {
        printf("Access granted.\n");
    }
    else{
        printf("Too many failed attempts. Account is locked.\n");
    }

    return 0;
}