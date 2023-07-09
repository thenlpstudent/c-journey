#include <stdio.h>

int compute_sum(int * src, int * key, int size)
{
  int sum = 0;
  for (int i = 0; i < size; i++)
    {
      sum += src[key[i]]; 
    }
  return sum;
}


int main(void)
{
  int ean[12];
  printf("Enter the first 12 digits of an EAN: ");
  scanf_s("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
	  &ean[0],
	  &ean[1],
	  &ean[2],
	  &ean[3],
	  &ean[4],
	  &ean[5],
	  &ean[6],
	  &ean[7],
	  &ean[8],
	  &ean[9],
	  &ean[10],
	  &ean[11]);

  int s1 [] = {1, 3, 5, 7, 9, 11};
  int s2 [] = {0, 2, 4, 6, 8, 10};

  int sum1 = compute_sum(ean, s1, 6);
  int sum2 = compute_sum(ean, s2, 6);

  sum2 += (sum1 * 3);
  sum2 -= 1;
  sum2 = sum2 % 10;
  sum2 = 9 - sum2;

  printf("Check digit: %d\n", sum2);
  
}
