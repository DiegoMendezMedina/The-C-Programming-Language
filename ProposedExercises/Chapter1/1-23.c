#include <stdio.h>

/**
 * 1-23: Write a program to remove all 
 *       comments from a C program. Don't
 *       forget to handle quoted strings 
 *       and characters constants properly.
 *       C comments don't nest.
 */

#define MAXLINE 1000

char line[MAXLINE];
char new_line[MAXLINE];
char flag; /**
	    * flag = 'z' means there where zero possible 
	    *            comments.
	    * flag = 'c' means a comment just as this section
	    *            has appeared.
	    */

int getlinee(void);
void remove_comments(int);

int main()
{
  extern char flag;
  int len;

  flag = 'z';
  while((len = getlinee()) > 0){
    remove_comments(len);
    printf("%s", new_line);
  }
  return 0;
}

int getlinee(void)
{
  int c, i;
  extern char line[];

  i = 0;
  while(i < MAXLINE && (c = getchar()) != EOF && c != '\n')
    line[i++] = c;
  if(c == '\n')
    line[i++] = c;
  line[i] = '\0';

  return i; 
}

void remove_comments(int slen)
{
  extern char flag;
  extern char line[], new_line[];
  int i, j, aux;

  j = 0;
  for(i = 0; i < slen; i++){
    if(flag == 'c'){
      new_line[0] = '\0';
      for(int l = i; l < slen; l++){
	if(line[l] == '*' && line[l+1] == 47){
	  flag = 'z';
	  return;
	}
      }
      return;
    }
    
    aux = i;
    if(line[aux++] == 47){
      if(line[aux] == '*' && flag == 'z'){
	new_line[j++] = '\n';
	new_line[j] = '\0';
	  flag = 'c';
	  i = slen+2;
      }
      else if(line[aux] == 47){
	new_line[j++] = '\n';
	new_line[j] = '\0';
	flag = 'z';
	return;
      }
      else {
	new_line[j++] = line[i];
	flag = 'z';
      }
    }
    else 
      new_line[j++] = line[i];    
  }
  new_line[i] = '\0';
}
