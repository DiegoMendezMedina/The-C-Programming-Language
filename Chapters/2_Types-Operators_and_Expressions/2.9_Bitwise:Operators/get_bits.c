#include <stdio.h>

unsigned getbits(unsigned x, int p, int n);

int main(){
  unsigned x;
  int p, n;
  printf("x: ");
  scanf("%d", &x);
  printf("p: ");
  scanf("%d", &p);
  printf("n: ");
  scanf("%d", &n);
  printf("%d\n", getbits(x, p, n) );
  return 0;
}

/* getbits: get n bits from position p*/
unsigned getbits(unsigned x, int p, int n){
  return (x >> (p+1-n)) & ~(~0 << n);
}
