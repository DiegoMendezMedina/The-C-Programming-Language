#include <stdio.h>

/* 1-10: Copies input to its output, replaces:
   each tab by \t.
   each backspace by \b.
   each backlash by \\.
*/

int main(){
  int c;
  
  while((c = getchar()) != EOF){
    if(c == 9)
      printf("\\t");
    else if( c == 8)
      printf("\\b");
    else if (c == 92)
      printf("%c%c", 92, 92);
    else
      printf("%c",c);
  }

  return 0;
}
