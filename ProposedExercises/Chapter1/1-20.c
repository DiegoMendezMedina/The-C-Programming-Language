#include <stdio.h>
/* 1-20: Write a program detab that replaces tabs in the input with
   the proper number of blanks to space the next tab stop.
   For any comment or suggestion, feel free to make a pull request or 
   contact me at diegomm@ciencias.unam.mx */

#define MAXLINE 1000
#define SPACES 8     /* number of blanks to replace a tab */

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

/* detab: copies line to lineS, replacing tabs with spaces */
void detab(void){
  extern char line[];
  extern char lineS[];
  int i, j;
  
  i = j = 0;
  while(line[i] != '\0'){
    if(line[i] == '\t')
      for(int l = 0; l < SPACES; l++){
	lineS[j] = ' ';
	++j;
      }
    else{
      lineS[j] = line[i];
      ++j;
    }
    ++i;
  }
  lineS[j] = '\0';
}
