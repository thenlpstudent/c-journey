#include <stdio.h>

char * get_10_str(int d)
{
  char * strs_10 [] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
  return strs_10[(d)]; 
}

char * get_tenths_str(int d)
{
  char * strs_tenths [] = {"twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"}; 
  return strs_tenths[(d-2)]; 
}

char * get_digits(int d)
{
  char * strs_digits [] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
  return strs_digits[(d - 1)]; 
}

void number_as_text(int t, int d)
{
  if (t == 1)
    {
      printf("Number to text: %s\n", get_10_str(d)); 
    }else
    {
      if (d != 0)
	printf("Number to text: %s-%s\n", get_tenths_str(t), get_digits(d));
      else
	printf("Number to text: %s\n", get_tenths_str(t));  
    }
}

int main(void)
{  
  int t = 0; int d = 0;

  printf("Enter a two-digit number: ");
  scanf_s("%1d%1d", &t, &d);

  number_as_text(t,d);  
}
