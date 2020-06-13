#include <stdio.h>

/**
 *Programa que cuenta espacios en blanco, tabuladores y nuevas lineas.
 */

main(){
  int c, nb, nt, nnl;
  nb = nt = nnl = 0;
  while((c = getchar()) != EOF){
    if( c == 32)
      ++nb;
    if(c == 9)
      ++nt;
    if(c == 10)
      ++nnl;
     }
  printf("Espacios en blanco: %d\n Tabuladores: %d\n Nuevas lineas: %d\n", nb, nt, nnl);
    }
