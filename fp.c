#include <stdio.h>
#include <stdlib.h>
#define NUM(a) (sizeof(a) / sizeof(*a))

int * filter(int * arr,int size, int (*p)(int a))
{
  int ind = 0; 
  int * result = (int*)malloc(size*sizeof(int));   
  for (int i = 0; i < size; i++)
    {
      if (p(arr[i]))
	{
	  printf("yo -> %d\n", arr[i]);
	  result[ind] = arr[i];
	  ind += 1; 
	}
    }

  if (ind != size)
    {
      printf("ind is %d\n", ind);
      realloc(result, ind * sizeof(int)); 
    }
  return result;
}

int f(int a)
{
  return a > 5; 
}

int reduce(int * arr, int size, void (*p)(int * result, int b))
{
  int result = 0;
  for (int i = 0; i < size; i++)
    {
      p(&result, arr[i]);
    }
  return result;
}

void r(int * result, int b)
{
  *result += b;
}

void map(int * arr, int size, int (*p)(int a))
{
  for (int i = 0; i < size; i++)
    {
      printf("%d mapped is %d\n", arr[i], p(arr[i]));
    }
}

int m(int a)
{
  return a * 5;
}


int main(void)
{
  int arr [] = {1,2,3,4,5,6,7,8,9,10};
  int * fs = filter(arr, 10, f);
  int s = NUM(fs);
 
  for (int i = 0; i < s; i++)
    printf("%d\n", fs[i]); 
  
}
