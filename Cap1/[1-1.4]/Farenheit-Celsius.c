#include <stdio.h>
/* Imprime la tabla Farenheit-Celsius
   para fahr = 0, 20, ..., 300. */

main (){
  int fahr, celsius;
  int lower, upper, step;

  lower = 0;   //Limite inferior.
  upper = 300; //Limite superior.
  step = 20; //Incremento.

  fahr = lower;
  while(fahr <= upper){
    celsius = 5*(fahr-32)/9;
    printf("%3d\t %6d\n", fahr, celsius);
    fahr += step;
  }
}
