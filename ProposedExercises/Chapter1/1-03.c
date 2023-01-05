#include <stdio.h>
/* Excercise 1-3. Modify the temperature conversion program 
   to print a heading above the table.
*/

int main(){
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;      /* lower limit of temperature table */
  upper = 300;    /* upper limit of temperature table */
  step = 20;      /* step size */

 fahr = lower;
 printf("Farenheit-Celsius conversion table, reverse order.\nFarenheit:\tCelsius:\n");
  while(fahr <= upper){
    celsius = (5.0/9.0) *(fahr-32);
    printf("%3.0f\t\t%6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }

  return 0;
}
