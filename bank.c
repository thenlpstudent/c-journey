#include <stdio.h>

float interest_to_precent(float interest)
{
        return interest / 100;
}

float calc_loan(float balance, float interest, float mpay)
{
        interest = interest_to_precent(interest / 12);
        balance += (balance * interest);
        balance -= mpay;
        return balance;
}

int main(void)
{
        float amount = 0.0f;
        float interest_rate = 0.0f;
        float monthly_payment = 0.0f;
        printf("Enter amount of loan: ");
        scanf_s("%f", &amount);

        printf("Enter interest rate: ");
        scanf_s("%f", &interest_rate);

        printf("Enter monthly payment: ");
        scanf_s("%f", &monthly_payment);

        int size = 3;
        const char *positions[3];
        positions[0] = "first";
        positions[1] = "second";
        positions[2] = "third";

        for (int i = 0; i < size; i++)
        {
                amount = calc_loan(amount, interest_rate, monthly_payment);
                printf("Balance remaining after %s payment: $%.2f\n",
                       positions[i], amount);
        }
}