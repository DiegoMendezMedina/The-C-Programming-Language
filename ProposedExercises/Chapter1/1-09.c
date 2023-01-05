#include <stdio.h>

/*1-9: Write a program to copy its input to its 
  output, replacing each string of one or more 
  blanks by a single blank. */

int main(){
  int c, cont;
  
  cont = 0;
  while((c = getchar()) != EOF)
    if(c != 32){
      printf("%c", c);
      cont = 0;
    }
    else if(cont == 0){
      printf(" ");
      cont ++;
    }

  return 0;
}
