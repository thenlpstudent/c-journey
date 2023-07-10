#include <stdio.h>

int main(void)
{
  int knots = 0;
  printf("Wind speed in knots: ");
  scanf_s("%d", &knots); 
  
  int conditions[] =
    {
     knots < 1,
     knots >= 1 && knots <= 3,
     knots >= 4 && knots <= 27,
     knots >= 28 && knots <= 47,
     knots >= 48 && knots <= 63,
     knots > 63
    };
  char * strs[] =
    {
     "Calm",
     "Light air",
     "Breeze",
     "Gale",
     "Storm",
     "Hurricane"
    };

  int size = 6;
  int ind = 0;
  for (int i = 0; i < size; i++)
    {
      ind |= i * conditions[i];
      if (ind >= 1)
	break;
    }
  
  printf("According to the Beaufort Scale the weather is : %s\n", strs[ind]); 
  
  return 0; 
}
