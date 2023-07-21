#include <stdio.h>

void get_grade(int * marks)
{
  char g = 'A'; 	
  int t = marks[0]; 
  if (t >= 7 && t < 8)
	  g = 'B'; 
  if (t >= 5 && t < 7)
	  g = 'C'; 
  if (t >= 3 && t < 5)
	  g = 'D'; 
  if (t < 3)
	  g = 'F'; 
  printf("Your grade is %c\n", g); 
}

int main(void)
{
 int marks[2]; 	
 printf("Enter your marks: "); 
 scanf("%1d%1d", &marks[0], &marks[1]);
 get_grade(marks);
 return 0; 
}
