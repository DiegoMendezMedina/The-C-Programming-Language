#include <stdio.h>
#define MAXLINE 1000 /* tamaño maximo de la linea de entrada */

int getlinee(char line[], int maxline);
void cleanRight(char line[], int maxline);

int main(){
  int len; /* longitud actual de la linea*/
  int max; /*maxima longitud vista hasta el momento*/
  char line[MAXLINE]; /*linea de la entrada actual*/

  max = 0;
  while((len = getlinee(line, MAXLINE))> 0){
    cleanRight(line, len);
    printf("%s", line);
  }
  return 0;
}

/* cleanRight: recorre de derecha a izquierda el arreglo recibido, limpia los espacios y tabulacions */
void cleanRight(char s[], int lim){
  int aux;
  
  aux = lim - 2;
  lim = lim -1;
  for(; lim >= 0; lim--)
    if(s[lim] == ' '|| s[lim] =='\t'||s[lim] == '\n'){
      s[lim] = '\n';
      s[lim+1] = '\0';
    }
    else lim = -1;
}
/* getline: lee una linea en s, regresa su longitud. */
int getlinee(char s[], int lim){
  int c, i, j, cont, existe;
  
  lim = lim - 2;
  cont = existe = 0;
  for(i = 0; (c = getchar()) != EOF && c != '\n';i++){
    if(i < lim){
      if(c == 9 || c == 32)
	cont ++;
      else{
	cont = 0;
	existe = 1;
      }
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
  
  if(existe == 0){
    s[0]='\0';
  }
  return i;
}
