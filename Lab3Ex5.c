#include <stdio.h>

#define MAX_SIZE 20  

double calc_mean(int arr[], int size)
{
    int sum = 0;
    for(int i = 0; i<size; i++)
    {
        sum += arr[i];
    }
    return (double)sum / size;
}

int calc_mode(int arr[], int size)
{
        int mode = arr[0], max_count = 1, current_count = 1;

        for(int i=1; i<size; i++)
        {
            if(arr[i] == arr[i-1])
            {
                current_count++;
            }
            else{
                current_count = 1;
            }
            if(current_count > max_count)
            {
                max_count = current_count;
                mode = arr[i];
            }
        }
        return mode;
}

double calc_median(int arr[], int size)
{
    if(size % 2 == 0)
    {
        return (arr[size / 2 - 1] + arr[size / 2]) / 2.0;
    }
    else
    {
        return arr[size / 2];
    }
}

int main(void)
{
    int numbers[MAX_SIZE], size;

    printf("Enter the numbers of elements (up to 20): ");
    scan("%d", size);

    if (size < 1 || size > MAX_SIZE)
    {
        printf("Invalid size. Please enter a value between 1 and 20.\n");
        return 1;
    }

    printf("Enter %d numbers in ascending order (between 1 and 100):\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &numbers[i]);
        if (numbers[i] < 1 || numbers[i] > 100)
        {
            printf("Invalid input. Numbers must be between 1 and 100.\n");
            return 1;
        }
    }

    double mean = calc_mean(numbers, size);
    int mode = calc_mode(numbers, size);
    double median = calc_median(numbers, size);

    printf("Mean: %.2f\n", mean);
    printf("Mode: %d\n", mode);
    printf("Median: %.2f\n", median);

    return 0;
}