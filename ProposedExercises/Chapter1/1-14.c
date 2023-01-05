#include <stdio.h>
/* 1-14: Write a program to pint a histogram 
   of the frequencies of different characters 
   in its input. */

int main(){
  int c, aux, cont;
  int abcd[27];

  cont  = aux = 0;
  for(int i = 0; i < 27; i++)
    abcd[i] = 0;
  
  while((c = getchar()) != EOF){
    /* Not ascii */
    if(c > 127)
      aux++;
    /* Upper Letters */
    else if (c >= 65 && c <= 90)
      abcd[c-65]++;
    /* Lower letter */
    else if (c >= 97 && c <= 122)
      abcd[c-97]++;
    /* Other characters */
    else if(c != 9 && c!= 10 && c != 32)
      abcd[26]++;
  }
  abcd[26] += aux/2;
  
  int r = 97;
  for(int i = 0; i < 27; i++){
    if(i < 26 ){
      printf(" %2c :", r);
      r++;
    }
    else
      printf(" Other characters :");
    
    for(int l = 0; l < abcd[i]; l++)
      printf( "-");    
    printf("\n");
  }
  
  return 0;
}
