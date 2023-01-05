#include <stdio.h>

/* 1-12: Write a program that prints its input 
   one word per line. */

int main(){
  int c;
  
  while((c = getchar()) != EOF){
    if(c == 32 || c == 8 || c == 10)
      printf("\n");    
    else if( c != ',' && c != '.' && c != ';'
	     && c != ':') 
      printf("%c",c);
  }

  return 0;
}
