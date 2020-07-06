#include <stdio.h>
/* 1-10: Copies input to its output, replaces:
   each tab by \t.
   each backspace by \b.
   each backlash by \\.
   For any comment or suggestion, feel free to make a pull request or 
   contact me at diegomm@ciencias.unam.mx */
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
