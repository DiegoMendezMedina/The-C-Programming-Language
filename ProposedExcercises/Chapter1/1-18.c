#include <stdio.h>
/* 1-18: Write a prgram to remove trailing blanks and tabs from each 
   line of input, and to delete entirele blank lines.
   For any comment or suggestion, feel free to make a pull request or 
   contact me at diegomm@ciencias.unam.mx */
#define MAXLINE 1000

int getlinee(char line[], int maxline);
void cleanRight(char line[], int maxline);

int main(){
  int len; 
  int max; 
  char line[MAXLINE]; 

  max = 0;
  while((len = getlinee(line, MAXLINE))> 0){
    cleanRight(line, len);
    printf("%s", line);
  }
  return 0;
}

/* cleanRight: runs the line from right to left, cleans blanks and tabs*/
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
