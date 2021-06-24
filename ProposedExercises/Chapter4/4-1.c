#include <stdio.h>
#include <string.h>

/**
 * 4-1: Write the function strrindex(s,t), which returns the position of the 
        rightmost occurence of t in s, or -1 if there is none
 */

#define MAXLINE 1000 /* maximum input length */

int getlinee(char line[], int max);
int strrindex(char source[], char searchfor[], int length);

char pattern [] = "ould"; /* pattern to search for */

int main()
{
  int length;
  char line[MAXLINE];
  int found = 0;
  int check;
  
  while((length = getlinee(line, MAXLINE)) > 0){
    if((check = strrindex(line, pattern, length)) >= 0){
      printf("%s// Last occurence: %d\n", line, check);
      found++;
    }
    
  }
  
  return found;
}

/* getlinee : get line into s, return length */
int getlinee(char s[], int lim)
{
  int c, i;
  i = 0;

  while(--lim > 0 && (c = getchar()) != EOF && c != '\n')
    s[i++] = c;
  
  if(c == '\n')
    s[i++] = c;
  
  s[i] = '\0';
  
  return i;
}

/* strrindex: return index of the rightmost occurence of t in s, -1 if none*/
int strrindex (char s[], char t[], int length)
{
  int i, j, k, lk;

  lk = strlen(t);
    
  for(i = length-1; i >= 0; i--){
    for(j = i, k = lk-1; k >= 0 && s[j] == t[k]; j--, k--)
      ;
    if(k == -1) /* k went all through the pattern backwards*/
      return i-lk+1;
  }
  return -1;
}
