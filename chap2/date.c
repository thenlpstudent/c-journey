#include <stdio.h>

int main(void)
{
        int month = 0;
        int day = 0;
        int year = 0;
        printf("Enter a date (mm/dd/yyyy): ");
        scanf_s("%d/%d/%d", &month, &day, &year);

        printf("You entered the date: %d/%d/%d", year, month, day);
        return 0;
}