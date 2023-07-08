#include <stdio.h>

int main(void)
{
        int digits[3];
        printf("Enter phone number [(xxx) xxx-xxxx]: ");
        scanf_s("(%d) %d-%d", &digits[0], &digits[1], &digits[2]);

        printf("You entered %d.%d.%d", digits[0], digits[1], digits[2]);
}