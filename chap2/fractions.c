#include <stdio.h>

void add_frac(int *f1, int *f2, int *sum)
{
        f1[0] = f1[0] * f2[1];
        f2[0] = f2[0] * f1[1];

        f1[1] = f1[1] * f2[1];

        sum[0] = f1[0] + f2[0];
        sum[1] = f1[1];
}

int main(void)
{
        int f1[2];
        int f2[2];

        printf("Enter two fractions separated by a plus sign: ");
        scanf_s("%d/%d+%d/%d", &f1[0], &f1[1], &f2[0], &f2[1]);

        int sum[2];
        add_frac(f1, f2, sum);
        printf("The sum is %d/%d", sum[0], sum[1]);
}