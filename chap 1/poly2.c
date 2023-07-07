#include <stdio.h>

int main(void)
{
        int x = 0;
        scanf_s("%d", &x);

        int term1 = (3 * x + 2);
        int term2 = (x - 5);
        int term3 = (x - 1);
        int term4 = (x + 7);
        int term5 = (x - 6);

        int ans = term1 * term2 * term3 * term4 * term5;
        printf("Answer : %d", ans);
}