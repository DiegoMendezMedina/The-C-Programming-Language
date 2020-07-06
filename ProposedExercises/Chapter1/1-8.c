#include <stdio.h>

/*1-8: Counts blanks, tabs and newlines.
  For any comment or suggestion, feel free to make a pull request or 
  contact me at diegomm@ciencias.unam.mx */

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
  printf("blanks: %d\n tabs: %d\n new lines: %d\n", nb, nt, nnl);
    }
