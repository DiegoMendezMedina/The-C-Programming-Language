#include <stdio.h>

/**
 * atoi implementation and a test.
 */

int atoi(char s[]);

void main(){
  int a,b;
  char string[4];
  
  scanf("%s", string);
  a = atoi(string);
  scanf("%s", string);
  b = atoi(string);
  
  printf("%d\n", a+b);
}

/**
 *  atoi: converts a string of digits into it's numeric equivalent.
 */

int atoi(char s[]){
  int i, n;

  n = 0;
  for(i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
    n = 10*n + (s[i] - '0');
  
  return n;
}
