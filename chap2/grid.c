#include <stdio.h>

void print_grid(int *grid)
{
        for (int i = 0; i <= 12; i += 4)
        {
                printf("%2d %2d %2d %2d\n",
                       grid[i], grid[i + 1], grid[i + 2], grid[i + 3]);
        }
}

void print_row_sums(int *grid)
{
        int row_sums[4];
        for (int i = 0, ind = 0; i <= 12; i += 4, ind += 1)
        {
                row_sums[ind] =
                    grid[i] + grid[i + 1] + grid[i + 2] + grid[i + 3];
        }
        printf("Row sums: %2d %2d %2d %2d\n",
               row_sums[0], row_sums[1], row_sums[2], row_sums[3]);
}

void print_col_sums(int *grid)
{
        int colum_sums[] = {0, 0, 0, 0};
        for (int i = 0; i <= 12; i += 4)
        {
                colum_sums[0] += grid[i];
                colum_sums[1] += grid[i + 1];
                colum_sums[2] += grid[i + 2];
                colum_sums[3] += grid[i + 3];
        }
        printf("Column sums: %2d %2d %2d %2d\n",
               colum_sums[0], colum_sums[1], colum_sums[2], colum_sums[3]);
}

void print_diag_sums(int *grid)
{
        int diag_sums[] = {0, 0};
        int diag1_ind = 0;
        int diag2_ind = 3;
        for (int i = 0; i <= 12; i += 4)
        {
                diag_sums[0] += grid[i + diag1_ind];
                diag_sums[1] += grid[i + diag2_ind];

                diag1_ind += 1;
                diag2_ind -= 1;
        }
        printf("Diagonal sums: %2d %2d\n", diag_sums[0], diag_sums[1]);
}

int main(void)
{
        int grid[16];
        printf("Enter the numbers from 1 to 16 in any order\n");
        scanf_s("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
                &grid[0],
                &grid[1],
                &grid[2],
                &grid[3],
                &grid[4],
                &grid[5],
                &grid[6],
                &grid[7],
                &grid[8],
                &grid[9],
                &grid[10],
                &grid[11],
                &grid[12],
                &grid[13],
                &grid[14],
                &grid[15]);
        printf("============results================\n");
        print_grid(grid);
        print_row_sums(grid);
        print_col_sums(grid);
        print_diag_sums(grid);

        return 0;
}
