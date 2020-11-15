#include <stdio.h>

int lower(int c);

void main(){
  int c;
  char s[100];
  int cont = 0;
  
  for(int i = 0; i < 99; i++, cont++)
    if((c = getchar()) != '\n')
      if(c != EOF)
	s[i] = lower(c);
  
  s[cont] = '\0';
  
  printf("%s\n", s);
}

/**
 * lower: convert c to lower case; ASCII only
 */
int lower(int c){
  if(c >= 'A' && c <= 'Z')
    return c+ 'a' - 'A';
  else
    return c;
}
