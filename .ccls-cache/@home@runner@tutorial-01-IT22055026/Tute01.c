/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int mark1, mark2, total;
  float avg;
  
  printf("Enter the Marks 01:");
  scanf("%d", &mark1);

  printf("Enter the Marks 02:");
  scanf("%d", &mark2);

  total = mark1 + mark2;

  avg = total / 2.0;

  printf("Total marks is: %d \n", total);

  printf("Average Marks is: %.2f", avg);
  
  return 0;
}

