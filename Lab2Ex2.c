#include <stdio.h>

int main() {
    //The program calculates the value of a person's weight in platinum. The program asks for the user's weight in pounds, it then multiplies the weight by 1770.0 and by 14.5. Therefore if I input 100, the result will be $2566500.00
    float weight;
    double value;

    //When using double instead of float, the result will be more precise and accurate.

    printf("Enter your weight in pounds: \n");
    scanf("%f", &weight);

    value=1770.0 * weight * 14.5;
    printf("Your weight in platinum costs $%.4lf\n value");

    //%f attemtps to interpret the binary representation of an int as a floating point while %d correctly interprets it as an integer

    //If the integer corresponds to a non-printable character using %c there will be no visible output.

    int intValue = (int)value;
    printf("Value as an integer: %d\n", intValue);

    printf("Octal: %o, Hexadecimal: %x\n", intValue, intValue);

    return 0;

}