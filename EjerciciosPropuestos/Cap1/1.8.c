#include <stdio.h>

main(){
  int c, cont = 0;
  while((c = getchar()) != EOF)
    if(c == 10 || c == 9 || c == 32)
      ++cont;
  printf("%d\n", cont);
    }
