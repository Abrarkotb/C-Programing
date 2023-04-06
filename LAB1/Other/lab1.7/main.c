#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y, quotient, remainder;
    printf("Enter dividend: ");
    scanf("%d", &x);
    printf("Enter divisor: ");
    scanf("%d", &y);

    quotient = x / y;
    remainder = x % y;

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d", remainder);
    return 0;
}
