#include <stdio.h>
/**
 * Copia la entrada a la salida, reemplazando:
 * cada tabulacion por \t,
 * cada retroceso por \b y
 * cada diagonal invertida por \\.
 */
main(){
  int c;
  while((c = getchar()) != EOF){
    if(c == 9)
      printf("\\t");
    else if( c == 8)
      printf("\\b");
    else if (c == 92)
      printf("\\");
    else
      printf("%c",c);
  }
}
