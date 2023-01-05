#include <stdio.h>

/* 1-15: Rewrite the temperature conversion program of Section 1.2 to
   use a function for conversion. */

#define LOWER 0
#define UPPER 300
#define STEP 20

float fahrTOcelsius(int fahr);

int main (){
  int fahr;
  printf("Farenheit\t Celsius\n");
  for(fahr = UPPER; fahr >= LOWER; fahr -= STEP)
    printf("%3d\t\t %6.2f\n", fahr, fahrTOcelsius(fahr));
  
  return 0;
}

float fahrTOcelsius(int fahr){
  return ((5.0/9.0)*(fahr-32));
}
