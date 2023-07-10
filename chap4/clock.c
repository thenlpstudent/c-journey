#include <stdio.h>

int main(void)
{
  int hr = 0; int min = 0; 
  printf("Enter 24-hour time: ");
  scanf_s("%d:%d", &hr, &min);

  char * time_period = hr >= 12 ? "PM" : "AM";
  hr = hr >= 13 ? hr - 12 : hr;

  char * s_hr = hr <= 9 ? "0" : "";
  char * s_min = min <= 9 ? "0" : "";

  printf("Equivalent 12-hour time: %s%d:%s%d %s", s_hr, hr, s_min, min, time_period);
  return 0; 
}
