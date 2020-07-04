#include <stdio.h>
#define MAXLINE 1000 /* tamaño maximo de la linea de entrada */

int getlinee(char line[], int maxline);

int main(){
  int len; /* longitud actual de la linea*/
  int max; /*maxima longitud vista hasta el momento*/
  char line[MAXLINE]; /*linea de la entrada actual*/

  max = 0;
  while((len = getlinee(line, MAXLINE))> 0)
    if(len > 80)
      printf("%s\n", line);
    
  return 0;
}

/* getline: lee una linea en s, regresa su longitud. */
int getlinee(char s[], int lim){
  int c, i, j;
  lim = lim - 2;
  for(i = 0; (c = getchar()) != EOF && c != '\n'; i++)
    if(i < lim){
      s[i] = c;
      j = i;
    }
  if(j == lim - 1){
    s[j] = '\n';
    j++;
    s[j] = '\0';
    if(i > 0)
      i++;
  }
  else{
    if(c == '\n'){
      s[i] = c;
      i++;
    }
    s[i] = '\0';
  }
  return i;
}
