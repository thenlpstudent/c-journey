#include <stdio.h>

int compute_sum(int * src, int * keys, int size)
{
  int sum = 0; 
  for (int i = 0; i < size; i++){
    sum += src[keys[i]]; 
  }
  return sum; 
}

int main(void)
{

  int upc [11];

  printf("Enter the first 11 digits of a UPC: ");
  scanf_s("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
	  &upc[0],
	  &upc[1],
	  &upc[2],
	  &upc[3],
	  &upc[4],
	  &upc[5],
	  &upc[6],
	  &upc[7],
	  &upc[8],
	  &upc[9],
	  &upc[10]);

  for (int i = 0; i < 11; i++)
    {
      printf("%d",upc[i]); 
    }
  printf("\n"); 
  
  int elems1 [] = {0, 2, 4, 6, 8, 10};
  int elems2 [] = {1, 3, 5, 7, 9};
  
  int sum1 = compute_sum(upc, elems1, 6);
  int sum2 = compute_sum(upc, elems2, 5); 
  
  sum2 += (3 * sum1);
  printf("Check digit: %d", (9 - ((sum2-1)%10)));  

  return 0;
}
