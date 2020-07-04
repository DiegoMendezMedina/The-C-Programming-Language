#include <stdio.h>

#define MAXLINE 1000
#define SPACES 5     /* numero de espacios por lo que sustituiremos un '\t' */ 

int getlinee(void);
void detab(void);

char line[MAXLINE];
char lineS[MAXLINE];

int main (){
  int len;
  extern char lineS[];
  
  while((len = getlinee())  > 0 ){
    detab();
    printf("%s", lineS);
  }
}

/* getline: lee una linea en s, regresa su longitud. */
int getlinee(void){
  int c, i;
  extern char line[];
  
  for(i = 0; i < MAXLINE - 1 && ( c = getchar()) != EOF && c != '\n'; i++)
    line[i] = c;
  if(c == '\n'){
    line[i] = c;
    ++i;
  }  
  line[i] = '\0';
  return i;
}

/* detab: copia line en lineS, remplazando los tabuladores con espacios */
void detab(void){
  extern char line[];
  extern char lineS[];
  int i, j, cont;
  
  i = j = cont = 0;
  while(line[i] != '\0'){
    if(line[i] == '\t'){
      for(int l = 0; l < SPACES; l++){
	lineS[j] = ' ';
	++j;
      }
      ++cont;      
    }
    else{
      lineS[j] = line[i];
      ++j;
    }
    ++i;
  }
  lineS[j] = '\0';
}
