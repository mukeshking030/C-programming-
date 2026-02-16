#include <stdio.h>

int main()
{
    int decimal;

    printf("Enter a positive decimal integer: ");
    scanf("%d", &decimal);

    if (decimal < 0)
    {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    else
    {
    printf("Decimal: %d\n", decimal);
    printf("Hexadecimal: %X\n", decimal);
    printf("Octal: %o\n", decimal);
    }

    return 0;
}
