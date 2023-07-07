#include <stdio.h>

int main(void)
{
        int money = 0;
        scanf_s("%d", &money);

        int notes[] = {20, 10, 5, 1};
        short size = 4;
        for (int i = 0; i < size; i++)
        {
                int note = notes[i];
                int div = money / note;
                money -= (note * div);
                printf("$%d : %d\n", note, div);
        }
}