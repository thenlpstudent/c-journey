#include <stdio.h>
#define TIMETABLE_SIZE 8

typedef struct {
  int arrival_time[2];
  int departure_time[2]; 
} flight_time; 


int convert_to_mins(int hr, int min)
{
  return (hr*60) + min; 
}

int get_hr(int mins)
{
  return mins/60; 
}

int get_mins(int mins){
  return mins % 60; 
}

void print_time(int hr, int min)
{
  char * daylight = hr >= 12 ? "p.m." : "a.m."; 
  hr = hr >= 13 ? (hr-12) : hr; 
  char * s_hr = hr <= 9 ? "0" : "";
  char * s_min = min <= 9 ? "0" : ""; 
  printf("%s%d:%s%d %s", s_hr,hr, s_min,min, daylight);  
}

flight_time get_nearest(int hr, int min, int * timetable, int size)
{
  flight_time t;
  int m_mins = 100*1000;  
  int mins = convert_to_mins(hr, min); 
  int m_arrival = 0; int m_dept = 0; 
  for (int i = 0; i < size-1; i+=2)
    {
      int arrival = timetable[i]; int dept = timetable[i+1];
     
      int delta = arrival-mins;
      if (delta < 0)
	delta *= -1; 
     
      if (delta > 0 && delta < m_mins){
	m_arrival = arrival; m_dept = dept;
	m_mins = delta; 
      }
    }
  
  t.arrival_time[0] = get_hr(m_arrival);
  t.arrival_time[1] = get_mins(m_arrival);
  t.departure_time[0] = get_hr(m_dept);
  t.departure_time[1] = get_mins(m_dept);
  return t; 
}


int main(void)
{
  int timetable [] = {
		   convert_to_mins(8,0), convert_to_mins(10,16),
		   convert_to_mins(9,43), convert_to_mins(11,52),
		   convert_to_mins(11,19), convert_to_mins(13,31),
		   convert_to_mins(12,47), convert_to_mins(15,0),
		   convert_to_mins(14,0), convert_to_mins(16,8),
		   convert_to_mins(15,47), convert_to_mins(17,55),
		   convert_to_mins(19,0), convert_to_mins(21,20),
		   convert_to_mins(21,45), convert_to_mins(23,58),
  };
  int hr = 0; int min = 0; 
  printf("Enter a 24-hour time: ");
  scanf_s("%2d:%2d", &hr, &min);

  flight_time f = get_nearest(hr, min, timetable, TIMETABLE_SIZE*2);
  printf("Closest depature time is ");
  print_time(f.arrival_time[0], f.arrival_time[1]);
  printf(", arriving at ");
  print_time(f.departure_time[0], f.departure_time[1]); 
  return 0; 
}
