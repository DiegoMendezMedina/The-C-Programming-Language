#include <stdio.h>

/**
 * 1-22: Write a program to "fold" long input
 *       lines into two or more shorter lines
 *       after the last non-blank character
 *       that occurs before the n-th column of input.
 *        Make sure your program does something intelligent
 *       with very long lines, and if there are no blanks 
 *       or tabs before the specified column.
 */

#define MAXLINE 1000
#define N 5 /* n-th column described above,
	       lower value for testing purposes */

char line[MAXLINE];
char new_line[MAXLINE];

void fold(int);
int getlinee(void);

int main()
{
  int len;
  
  while((len = getlinee()) > 0){
    fold(len);
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

/**
 * Assumes MAXLINE is enough to cover the folding.
 * 
 * @param slen: int, current length of string stored in
 *              line[].
 */
void fold(int slen)
{
  extern char line[], new_line[];
  int i, j, on_boundry, last_blank, cont;

  last_blank = 0;  // last_blank_space
  on_boundry = 1;  // tells if a new line is required.
  j = cont = 0;
  for(i = 0; i < slen; i++){
    if(line[i] == '\n'){
      new_line[j++] = '\n';
      last_blank = cont = 0;
      on_boundry = 1;
    }
    else{
      if(cont == N)
	on_boundry = 0;
      if(line[i] == ' ' || line[i] == '\t')
	last_blank = j;
      
      if(on_boundry){
	new_line[j++] = line[i];
	cont++;
      }
      else if(last_blank){
	new_line[last_blank] = '\n';
	if(j != last_blank) 
	  new_line[j++] = line[i];
	else j++;
	cont = j-last_blank;
	last_blank = 0;
	on_boundry = 1;
      }
      else{ // there is no blank space
	new_line[j++] = '-';
	new_line[j++] = '\n';
	last_blank = 0;
	new_line[j++] = '-';
	new_line[j++] = line[i];
	on_boundry = cont = 1;
      }
    }
  }
  new_line[j] = '\0';
}
