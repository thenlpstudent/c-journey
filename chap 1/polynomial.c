#include <stdio.h>

int ex(n, times)
{
        if (times == 0)
                return 1;

        int result = n;
        for (int i = 0; i < times - 1; i++)
        {
                result *= n;
        }
        return result;
}

int expression(int coefficent, int x, int times)
{
        return coefficent * ex(x, times);
}

int calc_poly(int x, int *coefficents, int *powers, int num_terms)
{
        int result = 0, positive = 0, negs = 0;
        for (int i = 0; i < num_terms; i++)
        {
                result = expression(coefficents[i], x, powers[i]);
                if (result > 0)
                        positive += result;
                else
                        negs += result;
        }
        return positive + negs;
}

int main(void)
{
        int x = 0;
        printf("Enter value for x : ");
        scanf_s("%d", &x);
        int coeffs[] = {3, 2, -5, -2, 7, -6};
        int powers[] = {5, 4, 3, 1, 1, 0};
        printf("answer2 : %d", calc_poly(x, coeffs, powers, 6));
}