#include <stdio.h>

float calc_tax(float income, int * conditions, float * fixed_tax, int * taxable_amounts, int * precentages, int size)
{
  int ind = 0; 
  for (int i = 0; i < size; i++)
    {
      ind += i * conditions[i];
      if (ind > 0)
	break;
    }
  float ft = fixed_tax[ind];
  int prct = precentages[ind];
  return ft + ((income - taxable_amounts[ind]) * prct/100);
}

int main(void)
{
  float income = 0;
  printf("Enter your income: ");
  scanf_s("%f", &income);
  
  int conditions [] =
    {
     income <= 750,
     income > 750 && income <= 2250,
     income > 2250 && income <= 3750,
     income > 3750 && income <= 5250,
     income > 5250 && income <= 7000,
     income > 7000
    };
  float fixed_tax [] =
    {
     0,
     7.50,
     37.50,
     82.50,
     142.50,
     230.00
    };
  int precentages [] =
    {
     1,
     2,
     3,
     4,
     5,
     6
    };
  int taxable_amounts [] =
    {
     0,
     750,
     2250,
     3750,
     5250,
     7000
    };
  printf("Your tax is : %f\n",  calc_tax(income, conditions, fixed_tax, taxable_amounts, precentages, 6));
  return 0; 
}
