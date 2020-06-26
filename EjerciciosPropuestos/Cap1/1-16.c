#include <stdio.h>
#define MAXLINE 1000 /* tamaño maximo de la linea de entrada */

int getlinee(char line[], int maxline);
void copy(char to[], char from[]);

int main(){
  int len; /* longitud actual de la linea*/
  int max; /*maxima longitud vista hasta el momento*/
  char line[MAXLINE]; /*linea de la entrada actual*/
  char longest[MAXLINE]; /*Donde se guarda la linea mas larga*/

  max = 0;
  while((len = getlinee(line, MAXLINE))> 0)
    if(len > max){
      max = len;
      copy(longest, line);      
    }
  if(max > 0)
    printf("Longitud de la cadena mas larga: %d \nCadena mas larga: %s \n", max,longest);
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

/* copy; copia 'from' en 'to'; supone que 'to' es suficientemente grande */
void copy(char to[], char from[]){
  int i;
  i = 0;
  while((to[i] = from[i]) != '\0')
    ++i;
}
