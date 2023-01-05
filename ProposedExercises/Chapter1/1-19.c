#include <stdio.h>

/* 1-19: Write a function reverse(s) that reverses the character 
   string s. Use it to write a program that reverses its inputs 
   a line at a time. */
   

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
  int i, j;
  char temp;
  
  j = lim-2;
  i = 0;
  for(; i < lim/2; i++, j--){
    temp = s[i];
    s[i] = s[j];
    s[j] = temp;
  }
  
  s[lim-1] = '\n';
  s[lim]   = '\0';
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
