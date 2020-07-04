#include <stdio.h>
#define MAXLINE 1000 /* tamaño maximo de la linea de entrada */

int getlinee(char line[], int maxline);
void reverse(char line[], int maxline);

int main(){
  int len; /* longitud actual de la linea*/
  char line[MAXLINE]; /*linea de la entrada actual*/

  while((len = getlinee(line, MAXLINE))> 0){
    reverse(line, len);
    printf("%s", line);
  }
  return 0;
}

/* cleanRight: recorre de derecha a izquierda el arreglo recibido, limpia los espacios y tabulacions */
void reverse(char s[], int lim){
  int aux, ss;
  char l [lim];
  aux = 0;
  ss = lim;
  //s[lim-1] = '\0';
  //s[lim-2] = '\n';
   lim = lim - 2;

  for(; lim >= 0; lim--)
    l[aux++] = s[lim];
  l[aux++] = '\n';
  l[aux] = '\0';

  for(int j = 0; j <=ss; j++)
    s[j] = l[j];
}
/* getline: lee una linea en s, regresa su longitud. */
int getlinee(char s[], int lim){
  int c, i, j;
  
  lim = lim - 2;
  for(i = 0; (c = getchar()) != EOF && c != '\n';i++){
    if(i < lim){
      s[i] = c;
      j = i;
    }
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
      s[i] = '\0';
    }
  }
  return i;
}
