#include <stdio.h>
/* Imprime la tabla Farenheit-Celsius
   para fahr = 0, 20, ..., 300. */

main (){
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;   //Limite inferior.
  upper = 300; //Limite superior.
  step = 20; //Incremento.

  fahr = lower;
  while(fahr <= upper){
    celsius = (5.0/9.0)*(fahr-32);
    printf("%3.0f\t %6.2f\n", fahr, celsius);
    fahr += step;
  }
}
