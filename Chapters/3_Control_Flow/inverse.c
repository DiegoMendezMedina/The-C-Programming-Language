#include <stdio.h>
#include <string.h>

void reverse(char s[]);

int main(){
  char s[100];
  scanf("%s", s);
  reverse(s);
  printf("%s\n", s);
}

/* reverse: invierte la cadena s en el mismo lugar*/
void reverse(char s[]){
  int c, i, j;
  
  for(i = 0, j = strlen(s)-1; i <  j; i++, j--)
    c = s[i], s[i] = s[j], s[j] = c;
}
