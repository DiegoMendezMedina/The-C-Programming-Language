#include <stdio.h>

int power(int m, int n);

/* Prueba la funcion power */

main(){
  int i;
  for(int i = 0; i < 10; i++)
    printf("%d %d %d\n", i, power(2,i), power(-3,i));
  return 0;
}

/* power: eleva la base de la n-esima potencia; n >=0 */

int power(int base, int n){
  int p, i;
  p = 1;

  for(i = 1; i <= n; ++i)
    p = p * base;
  return p;
}
