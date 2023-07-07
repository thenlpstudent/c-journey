#include <stdio.h>

#define N 6
#define M 10

int main(void)
{
        char grid[N][M];
        for (int i = 0; i < N; i++)
        {
                for (int j = 0; j < M; j++)
                {
                        grid[i][j] = ' ';
                }
        }
        char star = '*';
        grid[0][9] = star;
        grid[1][8] = star;
        grid[2][7] = star;
        grid[3][0] = star;
        grid[3][6] = star;
        grid[4][1] = star;
        grid[4][5] = star;
        grid[5][3] = star;

        for (int i = 0; i < N; i++)
        {
                for (int j = 0; j < M; j++)
                {
                        printf("%c", grid[i][j]);
                }
                printf("\n");
        }

        return 0;
}