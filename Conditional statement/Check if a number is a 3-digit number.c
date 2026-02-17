#include <stdio.h>
int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    if (n >= 100 && n <= 999)
        printf("3-digit number\n");
    else
        printf("Not a 3-digit number\n");

    return 0;
}
