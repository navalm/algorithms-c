#include <stdio.h>
#define TAX_RATE 1.05

float tax(float cost){
  return cost * TAX_RATE;
}

int main(void){
  float user_cost;
  printf("Enter in dollar-and-cents amount: ");
  scanf("%f",&user_cost);
  printf("With tax added: %.2f", tax(user_cost));
  return 0;
}
