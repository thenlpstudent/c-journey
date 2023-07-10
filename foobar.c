
#include <stdio.h>
#define MAX_SIZE 200 

int say(int n, int d, char * what_to_say)
{
  if (n % d != 0)
    return 0;
  printf("%s", what_to_say);
  return 1;
}

int main(void)
{

  int keys[] = {3,4,5,6,7};
  char * strs[] = {"Foo", "Bar","Zoo", "Goo", "Loo"};
  int size = 5; 
  
  for (int i = 1; i <= 200; i++)
    {
      int success = 0; 
      for (int j = 0; j < size; j++)
	{
	  int r = say(i, keys[j], strs[j]);
	  success = success | r;
	}
      if (!success)
	printf("%d", i);
      printf("\n");
    }
  return 0; 
}
