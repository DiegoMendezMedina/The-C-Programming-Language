#include <stdio.h>
/* Excercise 1-4: Print the Celsius-Farenheit conversion table.
   For any comment or suggestion, feel free to make a pull request or 
   contact me at diegomm@ciencias.unam.mx */

main(){
  int fahr, celsius;
  int lower, upper, step;

  lower = 0;      /* lower limit of temperature table */
  upper = 300;    /* upper limit of temperature table */
  step = 20;      /* step size */

  celsius = lower;
  printf("Celsius-Farenheit conversion table.\nCelsius:\tFarenheit:\n");
  while(celsius <= upper){
    //celsius = (5.0/9.0) * (fahr-32);
    fahr = (celsius * 9.0/5.0) + 32;
    printf("%3d\t\t%6d\n", celsius, fahr);
    celsius = celsius + step;
  }
}
