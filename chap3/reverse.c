#include <stdio.h>

int main(void)
{
  printf("Enter a two-digit number: ");
  int digit = 0;
  scanf_s("%d", &digit);
  printf("%d%d%d", digit%10, ((digit%100)/10),
	 digit/100);
}
