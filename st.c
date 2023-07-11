#include <stdio.h>

typedef struct Option
{
  int d;
  char * say; 
} Option;  

void printOptions(Option * options, int size)
{
  for (int i = 0; i < size; i++)
    {
      printf("d: %d and say: %s\n", options[i].d, options[i].say);
    }
}

int main(void)
{
  Option arr[] = {
		  {
		   .d = 7,
		   .say = "hello"
		  },
		  {
		   .d = 5,
		   .say = "yo"
		  }
  };
  printOptions(arr, 2);
  
  
  return 0; 
}
