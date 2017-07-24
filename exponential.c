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

int main(void){
  float input_parameter;
  int to_the_power;
  printf("Enter in a number: ");
  scanf("%f",&input_parameter);
  printf("Enter in a power: ");
  scanf("%d", &to_the_power);
  printf("%f", exp(input_parameter, to_the_power));
  return 0;
}
