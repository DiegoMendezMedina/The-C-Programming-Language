#include <stdio.h>
/* Imprime la tabla Farenheit-Celsius
   para fahr = 0, 20, ..., 300. */

/* fahrAcelcius: Convierte el valor recibido a grados Celsius */
float fahrAcelsius(int fahr);
#define LOWER 0
#define UPPER 300
#define STEP 20
main (){
  int fahr;
  printf("Farenheit    Celsius\n");
  for(fahr = UPPER; fahr >= LOWER; fahr -= STEP)
    printf("%3d\t      %6.2f\n", fahr, fahrAcelsius(fahr));
  return 0;
}

float fahrAcelsius(int fahr){
  return ((5.0/9.0)*(fahr-32));
}
