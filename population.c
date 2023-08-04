#include <stdio.h>

int get_integer_input(const char *prompt, int min_value)
{
    int value;
    do {
        printf("%s", prompt);
        scanf("%d", &value);
    } while (value < min_value);
    return value;
}

int main(void)
{
    int initialQuantity = get_integer_input("Enter initial quantity of llamas (at least 9): ", 9);
    int goalNumber = get_integer_input("Enter goal number (must be greater than or equal to the initial quantity): ", initialQuantity);

    int growthFactor = initialQuantity / 12;
    int years = 0;

    while (initialQuantity < goalNumber)
    {
        initialQuantity += growthFactor;
        years++;
    }

    printf("Total years to reach %i llamas is %i.\n", goalNumber, years);

    return 0;
}