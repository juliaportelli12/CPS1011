#include <stdio.h>

int main(void)
{
    for(int i = 1; i<=10; i++)
    {
        //Nested loop
        for (int j = 1; j<=10; j++){
            printf("%4d", i*j);
        }
        printf("\n");
    }
    return 0;
}