#include <stdio.h>

#define LOWER 0     /* lower limit of the table */
#define UPPER 300   /* upper limit of the table */
#define STEP 20     /* size of the step */
/* prints the farenheit-celsius conversion table */
main(){
  int fahr;
  for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    printf("%3d%6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
