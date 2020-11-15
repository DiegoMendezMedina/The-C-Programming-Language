#include <stdio.h>
/* 1-19: Write a function reverse that reverses the character string s. 
   Use it to write a prgoram that reverses its input a line at a time.
   For any comment or suggestion, feel free to make a pull request or 
   contact me at diegomm@ciencias.unam.mx */
#define MAXLINE 1000 

int getlinee(char line[], int maxline);
void reverse(char line[], int maxline);

int main(){
  int len; 
  char line[MAXLINE];

  while((len = getlinee(line, MAXLINE))> 0){
    reverse(line, len);
    printf("%s", line);
  }
  return 0;
}

void reverse(char s[], int lim){
  int aux, ss;
  char l [lim];
  aux = 0;
  ss = lim;
   lim = lim - 2;

  for(; lim >= 0; lim--)
    l[aux++] = s[lim];
  l[aux++] = '\n';
  l[aux] = '\0';

  for(int j = 0; j <=ss; j++)
    s[j] = l[j];
}

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
