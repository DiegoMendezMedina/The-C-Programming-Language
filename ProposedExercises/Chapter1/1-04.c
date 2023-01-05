#include <stdio.h>
/* Excercise 1-4: Write a program to print the 
   corresponding Celsius to Farenheit table. */

int main(){
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

  return 0;
}
