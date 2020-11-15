#include <stdio.h>
/*1-9: Copies input to its output.
  Replaces every string that has more than one blank with a single one.
  For any comment or suggestion, feel free to make a pull request or 
  contact me at diegomm@ciencias.unam.mx */
main(){
  int c, cont;
  cont = 0;
  while((c = getchar()) != EOF)
    if(c != 32){
      printf("%c", c);
      cont = 0;
    }
    else
      if(cont == 0){
	printf(" ");
	cont ++;
      }
      else
	cont++;
    
}
