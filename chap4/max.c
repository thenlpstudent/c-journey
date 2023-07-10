#include <stdio.h>

int main(void)
{
  int values[4];
  printf("Enter four integers: ");
  scanf_s("%d %d %d %d", &values[0], &values[1], &values[2], &values[3]);

  int max = 0; 
  
  for (int i = 0; i < 4; i++)
    {
      max = max <= values[i] ? values[i] : max;  
    }
  printf("The largest value is %d\n", max);
}
