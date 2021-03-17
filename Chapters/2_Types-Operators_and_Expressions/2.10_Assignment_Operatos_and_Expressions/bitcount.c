#include <stdio.h>

int bitcount(unsigned x);

int main(){
  int x = 10|;
  int r = bitcount(x);


  
  printf("%d\n", r);

  x &= (x-1);

  printf("%d\n", x);
}

int bitcount(unsigned x){
  int b;

  for(b = 0; x!= 0; x >>= 1){
    if(x & 01){
      b++;
    }
  }
  return b;
}

