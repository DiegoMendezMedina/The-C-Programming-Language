#include <stdio.h>
/* 1-16: Revise the main routine of the longest-line program so it will
   correctly print the length of the arbitrarily long input lines, and as
   much as possible of text. */

#define MAXLINE 1000

int getlinee(char line[], int maxline);
void copy(char to[], char from[]);

int main(){
  int len; 
  int max; 
  char line[MAXLINE]; 
  char longest[MAXLINE]; 

  max = 0;
  while((len = getlinee(line, MAXLINE))> 0)
    if(len > max){
      max = len;
      copy(longest, line);      
    }
  if(max > 0)
    printf("length of the longest line: %d \nlongest string: %s", max,longest);
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

void copy(char to[], char from[]){
  int i;
  i = 0;
  while((to[i] = from[i]) != '\0')
    ++i;
}
