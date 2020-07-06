#include <stdio.h>
/* Copies input to output; 2nd version */ 
main (){
  int c;
  printf("EOF: %d", EOF);
  while((c = getchar()) != EOF)
    putchar(c);
  
}
