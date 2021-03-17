#include <stdio.h>

/**
 * Excercise 2-6: Write a function setbits(x, p, n, y) that returns x
 * with the n bits that begin at position p set to the righmost n bits of y, 
 * leaving the others unchanged. 
 */

unsigned setbits(unsigned x, int p, int n, unsigned y);

int main(){
  unsigned x, y;
  int p, n;

  printf("x: ");
  scanf("%d", &x);
  
  printf("y: ");
  scanf("%d", &y);
  
  printf("p: ");
  scanf("%d", &p);
  
  printf("n: ");
  scanf("%d", &n);

  printf("%d\n", setbits(x, p, n, y));
}

unsigned setbits(unsigned x, int p, int n, unsigned y){
    // xxxxx00000xxxxx
  int a = x & ~(~(~0 << n) << (p + 1 - n));
  
    // 00000yyyyy00000
  int b = (y & ~(~0 << n)) << (p + 1 - n);

    // xxxxxyyyyyxxxxx
    return a | b;
}
