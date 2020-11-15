#include <stdio.h>
/* 1-21: Write a program entab that replaces strings of blanks by the
   minimum number of tabs and blanks to achieve the same spacing.
   For any comment or suggestion, feel free to make a pull request or 
   contact me at diegomm@ciencias.unam.mx */

#define MAXLINE 1000
#define SPACES 8     /* number of blanks to replace a tab */

int getlinee(void);
void entab(void);

char line[MAXLINE];
char lineS[MAXLINE];

main(){
  int len;
  extern char lineS[];

  while(getlinee() > 0 ){
    entab();
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

/* entab : copies line to lineS, replacing spaces with the minimum number 
   of tabs and blanks to achieve the same spacing */
void entab(void){
  extern char line[];
  extern char lineS[];
  int i, j, cont, aux;
  
  i = j = 0;
  while(line[i] != '\0'){
    if(line[i] == ' '){
      aux = i;
      cont = 0;
      while(line[aux] == ' '){
	++cont;
	++aux;
      }
      if(cont % 8 == 0)
	while(cont > 0){
	  lineS[j] = '\t';
	  ++j;
	  cont = cont - 8;
	}
      else{
	if(cont > 8){
	  while(cont >= 8){
	    lineS[j] = '\t';
	    ++j;
	    cont = cont - 8;
	  }
	  for(int l = 0; l < cont; l++){
	    lineS[j] = ' ';
	    ++j;
	  }
	}
	else
	  for(int l = 0; l < cont; l++){
	    lineS[j] = ' ';
	    ++j;
	  }
      }
      i = aux;
    }
    else{
      lineS[j] = line[i];
      ++j;
      ++i;
    }
  }
  lineS[j] = '\0';
}
