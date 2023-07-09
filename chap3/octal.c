#include <stdio.h>

int main(void)
{
  int oct = 0; 
  printf("Enter a octal number between 0 and 32767: ");
  scanf_s("%d", &oct);

  int o1 = ((((oct / 8) / 8 ) / 8 )/8) % 8;
  int o2 = (((oct / 8) / 8 ) / 8 ) % 8;
  int o3 = ((oct / 8) / 8) % 8;
  int o4 = (oct / 8) % 8;
  int o5 = oct % 8;

  printf("In octal, your number is: %d%d%d%d%d", o1, o2, o3, o4, o5); 
}
