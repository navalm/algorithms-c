#include <stdio.h>
#define SPHERE 4.0f/3.0f
#define M_PI 3.14159265358979323846f

float volume(float radius){
  return (SPHERE * M_PI) * (radius * radius * radius);
}

int main(void){
  float radius_sphere = 10.0f;
  printf("%f", volume(radius_sphere));
  return 0;
}
