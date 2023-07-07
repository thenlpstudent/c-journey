#include <stdio.h>

#define TAX 5

int main(void)
{
        float income = 0;
        printf("Enter an amount : ");
        scanf_s("%f", &income);
        printf("With tax added : %f", (income + (income * TAX / 100)));
}