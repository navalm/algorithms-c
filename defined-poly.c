#include <stdio.h>

float exp(float number, int power){
  int iteration = 1;
  float product = number;
  while(iteration < power){
    product *= number;
    iteration += 1;
  }
  return product;
}

float poly(float number){
  return (3 * exp(number, 5)) + (2 * exp(number,4)) - (5 * exp(number,3)) - exp(number,2) + (7 * number) - 6;
}

int main(void){
  float input_parameter;
  printf("DEFINED POLYNOMIAL: 3x^5 + 2x^4 - 5x^3 - x^2 + 7x -6\n");
  printf("Enter in a number for x: ");
  scanf("%f", &input_parameter);
  printf("Result: %f", poly(input_parameter));
}
