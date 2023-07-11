#include <stdio.h>
#define MAX_SIZE 200 

typedef struct Condition
{
  int key;
  char * say; 
} Condition;

int say(int n, int d, char * str)
{
  if (n % d != 0)
    return 0;
  printf("%s", str);
  return 1;
}

void printConditions(Condition * conditions, int size)
{
  for (int i = 0; i < size; i++)
    {
      printf("Key: %d \tSay: %s\n", conditions[i].key, conditions[i].say);
    }
}

int main(void)
{
  Condition conditions [] =
    {
     {
      .key = 3,
      .say = "Foo"
     },
     {
      .key = 4,
      .say = "Bar"
     },
     {
      .key = 5,
      .say = "Zoo"
     },
     {
      .key = 6,
      .say = "Loo"
     },
     {
      .key = 7,
      .say = "Woo"
     },
    };
  
  int size = 5;
    
  for (int i = 1; i <= MAX_SIZE; i++)
    {
      int success = 0; 
      for (int j = 0; j < size; j++)
	{
	  success |= say(i, conditions[j].key, conditions[j].say);
	}
      if (!success)
	printf("%d", i);
      printf("\n");
    }
  	
  return 0; 	
}
