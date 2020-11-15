#include <stdio.h>

/**
 * Excercise 2-2: Write a loop equivalent to: 
 * --------------------------------------------------------------
 * for (i=0; i<lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
 *     s[i] = c;
 * --------------------------------------------------------------
 * without using && or ||.
 **/

void main(){
  int c;
  int cont = 0;
  int lim = 100;
  char s[lim];

  /* Writing the equivalent loop: */
  for(int i = 0; i < lim - 1; i++, cont++)
    if((c = getchar()) != '\n')
      if(c != EOF)
	s[i] = c;

  /* Printing the string: */
  s[cont] = '\0';
  printf("%s\n", s);
}
