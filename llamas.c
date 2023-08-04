#include <stdio.h>
#include <cs50.h>

// to compile: gcc llamas.c -o llamas cs50.c

int main(void)
{
  int start;
  do {
    start = get_int("Enter initial quantity of llamas: ");
  }
  while (start < 9);

  int end;
  do
  {
    end = get_int("Enter goal number: ");
  } while (end < start);
  
  int years = 0;
  while (start < end)
  {
    start += start / 12;
    years++;
  }
  printf("Total years to get %i quantity of llamas is %i \n", end, years);
  
  return 0;
}
