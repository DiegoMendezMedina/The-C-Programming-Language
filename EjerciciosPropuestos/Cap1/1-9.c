#include <stdio.h>
/**
 *Programa que copia ssu entrada a la salida sin espacios.
 */
main(){
  int c, cont = 0;
  while((c = getchar()) != EOF)
    if(c != 32)
      printf("%c", c);
}
