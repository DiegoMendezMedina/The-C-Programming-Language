#include <stdio.h>

/**
 * Excercise 2-9: In a two's complement number system, x &= (x-1)
 *               deletes the rightmost 1-bit in x. Explain why.
 *               Use this observation to write a faster version of bitcount.
 */


/*
  let a be any  number in a two's complement number system,
  then if a is even the a may seem :
           a= x_32 ... x_2 0, where for every x_i  may be 0 or 1
  and a-1 may be :
           a-1 = x'_32 ... x'_2 1, notice at least two x_i changed their value 
  That's why 
 */
int main(){
  int n; 
}
