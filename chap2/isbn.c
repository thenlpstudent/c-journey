#include <stdio.h>

int main(void)
{
        int isbn[5];
        printf("Enter isbn: ");
        scanf_s("%d-%d-%d-%d-%d", &isbn[0], &isbn[1],
                &isbn[2], &isbn[3], &isbn[4]);

        char *group_names[5];
        group_names[0] = "GS1 Prefix";
        group_names[1] = "Group identifier";
        group_names[2] = "Publisher code";
        group_names[3] = "Item number";
        group_names[4] = "Check digit";

        for (int i = 0; i < 5; i++)
        {
                printf("%s :%d\n", group_names[i], isbn[i]);
        }
}