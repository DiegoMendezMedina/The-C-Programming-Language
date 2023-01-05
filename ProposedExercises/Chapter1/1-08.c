#include <stdio.h>

/* 1-8: Write a program to count blanks, tabs, 
   and newlines. */

int main(){
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
  printf("blanks: %d\ntabs: %d\nnew lines: %d\n", nb, nt, nnl);
  
  return 0;
}
