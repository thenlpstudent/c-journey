#include <stdio.h>

void print_date(int month, int day, int year)
{
 printf("%d/%d/%d", month, day, year); 
}

void p_date(int * date, int section){
 int ind = section*3; 	
 print_date(date[ind+0], date[ind+1], date[ind+2]); 
}; 


int convert_date_to_int(int month, int day, int year)
{
 return (month * 100) + (day) + (year * 1000); 
}

int compare_dates(int month, int day, int year, int other_month, int other_day, int other_year)
{
  int date1 = convert_date_to_int(month, day, year); 
  int date2 = convert_date_to_int(other_month, other_day, other_year); 
  
  if (date1 > date2)
	  return 0; 
  if (date1 == date2)
	  return -1; 
  if (date1 < date2)
	  return 1;
  return -2;
}

int main(void)
{
  const int SIZE = 2;  
  char * positions [] = {"first", "second"};  
  int vals [SIZE * 3]; 
  
  for (int i = 0; i < SIZE; i++)
  { 
   int ind = i * 3;	  
   printf("Enter %s date (mm/dd/yy) :", positions[i]); 
   scanf_s("%d/%d/%d", &vals[ind+0], &vals[ind+1], &vals[ind+2]); 
  }
  
  int min = 0; int max = 0; 
  if (compare_dates(vals[0], vals[1], vals[2], vals[3], vals[4], vals[5]) == 1){
    min = 0;
    max = 1; 
  }else{
    min = 1;
    max = 0; 
  }

  p_date(vals, min);
  printf(" is earlier than ");
  p_date(vals, max);
  printf("\n"); 

  return 0; 
}
