#include <stdio.h>

int add_integer_field(char *text)
{
        int i = 0;
        printf("%s", text);
        scanf_s("%d", &i);
        return i;
}

float add_float_field(char *text)
{
        float f = 0;
        printf("%s", text);
        scanf_s("%f", &f);
        return f;
}

void add_date_field(char *text, int *date)
{
        printf("%s", text);
        scanf_s("%d/%d/%d", &date[0], &date[1], &date[2]);
}

void print_table(int item_no, float price, int *date)
{
        printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");
        printf("%3d\t\t$%6.2f\t\t%2d/%2d/%2d", item_no, price, date[0], date[1],
               date[2]);
}

int main(void)
{
        int date[3];
        int item_no = add_integer_field("Enter item number: ");
        float unit_price = add_float_field("Enter unit price: ");
        add_date_field("Enter purchase date (mm/dd/yyyy): ", date);
        print_table(item_no, unit_price, date);

        return 0;
}