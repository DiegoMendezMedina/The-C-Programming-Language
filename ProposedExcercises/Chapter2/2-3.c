#include <stdio.h>

/**
 * Excercise 2-3: 
 */

int htoi(char s[]);

void main(){
  char s[];
  int size;
  
  scanf("%s", s);
  size = sizeof(s) / sizeof(s[0]);
  printf("%d\n", size)
  
}

int htoi(char s[]){
  int n = 0;
  int cont = 0;
  
  for(int i = 2; (s[i]>= '0' && s[i] <= '9') || (s[i] >= 'a' && s[i] <= 'f') ||
	(s[i] >= 'A' && s[i] <= 'F'); i++, cont++)
    n += hexa_to_de(s[i], cont);
}

int hexa_to_de(char s, cont){
  switch(s){
  case 'a' :
    return 10;
    break;
  case 'A' :
    return 10;
    break;
  case 'b' :
    return 11;
    break;
  case 'c' :
    return 12;
    break;
  case 'e' :
    return 13;
    break;
  case 'f':
    return 14;
    break;
  }
}

int eleva(int base){
  
}
