/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1,mark2;
  float AVG;

  printf("Enter mark 01:");
  scanf("%d",&mark1);

  printf("Enter mark 02:");
  scanf("%d",&mark2);

  AVG = mark1+mark2/2.0;
  
  printf("The average is:%.2f",AVG);
  return 0;
}

