#include <stdio.h>
/* Counts lines in input */
main(){
  int c, nl;
  nl = 0;
  while((c = getchar()) != EOF)
    if(c == 10)
      ++nl;
  printf("%d\n", nl);
}
