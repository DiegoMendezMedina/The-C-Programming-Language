#include <stdio.h>

/**
 * 3-2: Write a function escape(s, t) that converts characters like newline
 *      and tab into visible escape secuences like \n and \t as it copies the
 *      string t to s. Use a switch. Write a function for the other direction
 *      as well, converting escape sequences into the real characters.
 */

#define MAXLINE 1000

int getlinee(char line[]);
void escape(char s[], char t[]);
void inverse_escape(char s[], char t[]);

int main(){
  char s[MAXLINE];
  char t[MAXLINE];
  char r[MAXLINE];
  int len = getlinee(s);

  escape(s, t);
  inverse_escape(t, r);
  printf("word received: %s", s);
  printf("after escape: %s\n", t);
  printf("inverse_escape: %s", r);
}


/**
 * getlinee: Function to read a line from the standard input, saves it on
 *           line[].
 */
int getlinee(char line[]){
  int c, i;
  
  for(i = 0; i < MAXLINE - 1 && ( c = getchar()) != EOF && c != '\n'; i++)
    line[i] = c;
  if(c == '\n'){
    line[i] = c;
    ++i;
  }  
  line[i] = '\0';
  return i;
}

/**
 * escape: Function that converts characters like newline
 *      and tab into visible escape secuences
 *
 * @param s: char[]. String were characters are stored.
 * @param t, char[]. String with visible escape secuences.
 */
void escape(char s[], char t[]){
  int i, j;

  j = 0;
  for(i = 0; s[i] != '\0'; i++)
    switch(s[i]){
    case '\n':
      t[j++] = '\\';
      t[j++] = 'n';
      break;
    case '\t':
      t[j++] = '\\';
      t[j++] = 't';
      break;
    case '\a':
      /* Ctrl+V for bell character on unix */
      t[j++] = '\\';
      t[j++] = 'a';
      break;
    case '\b':
      t[j++] = '\\';
      t[j++] = 'b';
      break;
    case '\f':
      t[j++] = '\\';
      t[j++] = 'f';
      break;
    case '\r':
      t[j++] = '\\';
      t[j++] = 'r';
      break;
    case '\v':
      t[j++] = '\\';
      t[j++] = 'v';
      break;
    case '\\':
      t[j++] = '\\';
      t[j++] = '\\';
      break;
    case '\?':
      t[j++] = '\\';
      t[j++] = '?';
      break;
    case '\'':
      t[j++] = '\\';
      t[j++] = '\'';
      break;
    case '\"':
      t[j++] = '\\';
      t[j++] ='\"';
      break;
    default:
      t[j++] = s[i];
      break;
    }
  t[j] = '\0';
}

/**
 * inverse_escape: inverse of escape.
 * @param s: char[]. String were characters are stored.
 * @param t: char[]. String with escape secuences.
 */
void inverse_escape(char s[], char t[]){
  int i, j;
  
  j = 0;
  for(i = 0; s[i] != '\0'; i++)
    switch(s[i]){
    case '\\':
      switch(s[++i]){
      case 'n':
	t[j++] = '\n';
	break;
      case 't':
	t[j++] = '\t';
	break;
      case 'a':
	t[j++] = '\a';
	break;
      case 'b':
	t[j++] = '\b';
	break;
      case 'f':
	t[j++] = '\f';
	break;
      case 'r':
	t[j++] = '\r';
	break;
      case 'v':
	t[j++] = '\v';
	break;
      case '\\':
	t[j++] = '\\';
	break;
      case '?':
	t[j++] = '\?';
	break;
      case '\'':
	t[j++] = '\'';
	break;
      case '"':
	t[j++] = '\"';
	break;
      }
      break;
    default:
      t[j++] = s[i];
      break;
    }
}
