#include <stdio.h>
/* 1-15: Rewrite the temperature conversion program of Section 1.2 using 
   a function for conversion.
   For any comment or suggestion, feel free to make a pull request or 
   contact me at diegomm@ciencias.unam.mx */

float fahrTOcelsius(int fahr);
#define LOWER 0
#define UPPER 300
#define STEP 20
main (){
  int fahr;
  printf("Farenheit    Celsius\n");
  for(fahr = UPPER; fahr >= LOWER; fahr -= STEP)
    printf("%3d\t      %6.2f\n", fahr, fahrTOcelsius(fahr));
  return 0;
}

float fahrTOcelsius(int fahr){
  return ((5.0/9.0)*(fahr-32));
}
