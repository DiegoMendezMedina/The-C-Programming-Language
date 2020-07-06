#include <stdio.h>

/* 1-6: Vertify the expression getchar() != EOF is 0 or 1.
   1-7: print the value of EOF.
   For any comment or suggestion, feel free to make a pull request or 
   contact me at diegomm@ciencias.unam.mx 
*/

main(){
  printf("%d\nEOF value: %d\n",getchar() != EOF, EOF);
}
