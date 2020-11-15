#include <stdio.h>
/* 1-17: prints all input lines longer tahn 80 characters.
   For any comment or suggestion, feel free to make a pull request or 
   contact me at diegomm@ciencias.unam.mx */
#define MAXLINE 1000 

int getlinee(char line[], int maxline);

int main(){
  int len; 
  int max; 
  char line[MAXLINE];

  max = 0;
  while((len = getlinee(line, MAXLINE))> 0)
    if(len > 80)
      printf("%s\n", line);
    
  return 0;
}

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
