#include <stdio.h>

void filter(int * arr,int size, int (*p)(int a))
{
  for (int i = 0; i < size; i++)
    {
      if (p(arr[i]))
	printf("%d ", arr[i]);
    }
  printf("\n");
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
  int arr[] = {5,4,6,7};
  filter(arr, 4, &f);

  printf("reduced: %d\n", reduce(arr, 4, &r));

  map(arr, 4, &m);
  return 0; 
}
