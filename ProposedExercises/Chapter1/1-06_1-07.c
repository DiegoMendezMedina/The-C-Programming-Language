#include <stdio.h>

/* 1-6: Vertify the expression getchar() != EOF is 0 or 1.
   1-7: Write a program to print the value of EOF. */

int main(){
  char c;
  printf("Write a character and press Enter:");
  c = getchar();
  printf("¿EOF != %c? %d\nEOF value: %d\n", c, c != EOF, EOF);
  printf("In Linux EOF equals ctrl+d\n");
  return 0;
}
