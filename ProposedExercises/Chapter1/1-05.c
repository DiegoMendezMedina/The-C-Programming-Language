#include <stdio.h>
/* Excercise 1-5. Modify the temperature conversion
   program to print the table in reverse order, that is, 
   from 300 degrees to 0. */

int main(){
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;      /* lower limit of temperature table */
  upper = 300;    /* upper limit of temperature table */
  step = 20;      /* step size */

 fahr = upper;
 printf("Farenheit-Celsius conversion table.\n");
 printf("\tReverse printing.\n\nFarenheit:\tCelsius:\n");
  while(fahr >= lower){
    celsius = (5.0/9.0) *(fahr-32);
    printf("%3.0f\t\t%6.1f\n", fahr, celsius);
    fahr = fahr - step;
  }

  return 0;
}
