#include <stdio.h>

#define MAXLINE 10000     /* máximo tamaño de una linea de entrada */

int max;                  /* máxima longitud vista hasta el momento */
char line [MAXLINE];      /* línea de entrada actual */
char longest [MAXLINE];   /* aqui se guarda la línea más larga */

int getlinee(void);
void copy(void);

/* imprime la línea de entrada más larga; vesrsion "especializada" */
int main(){
  int len;
  extern int max;
  extern char longest [];

  max = 0;
  while((len = getlinee()) > 0)
    if(len > max){
      max = len;
      copy();
    }
  if(max > 0)
    printf("%s\n", longest);
  return 0;
}

/* getllinee, version "especializada" */
int getlinee(void){
  int c, i;
  extern char line[];

  for(i = 0; i < MAXLINE -1
	&& (c = getchar()) != EOF && c != '\n'; ++i)
    line[i] = c;

  if (c == '\n'){
    line[i] = c;
    ++i;
  }
  line[i] = '\0';
  return i;
}

/* copy, version "especializada" */
void copy(void){
  int i;
  extern char line[], longest[];

  i = 0;
  while((longest[i] = line[i]) != '\0')
    ++i;
}
