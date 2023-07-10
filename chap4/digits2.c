#include <stdio.h>
#define MAX_CHECKS 6

int pw (int x)
{
  if (x == 0)
    return 0;
  
  int r = 1;
  for (int i = 0; i < x; i++)
    {
      r *= 10; 
    }
  
  return r; 
}

int main(void)
{
  int number = 0; 
  printf("Enter a number: ");
  scanf_s("%d", &number);

  int upperbound = 9; 
  int out = 0; 
  for (int i = 0; i < MAX_CHECKS; i++)
    {
      int lowerbound = pw(i);
      upperbound += 9 * lowerbound;
      out += (i+1)*(number >= lowerbound && number <= upperbound); 
    }
  printf("Digits are %d\n", out);
}
