#include <stdio.h>

main(){
  int c, cont = 0;
  while((c = getchar()) != EOF)
    if(c != 32)
      printf("%c", c);
}
