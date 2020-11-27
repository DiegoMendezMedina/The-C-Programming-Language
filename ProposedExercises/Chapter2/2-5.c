#include <stdio.h>

/**
 * Excercise 2-5: Write the function any(s1, s2), which returns the first 
 * location in the string s1 where any character from the string s2 occurs, 
 * or -1 if s1 contains no characters from s2. 
 * (The standard library function strpbrk does the same job but returns
 * a pointer to the location). 
 */

int any(char s1[], char s2[]);

int main(){
  char s1[100], s2[100];
  int r;
  scanf("%s", s1);
  scanf("%s", s2);

  r = any(s1,s2);
  printf("%d\n", r);
}

/**
 * any: compare two strings and return the first locationn in the string
 *     s1 where any character from the string s2 occurs.
 * @param s1, s2: strings to compare. 
 * @return the first location in s1 where any character from s2 occurs.
 */
int any(char s1[], char s2[]){
  int i, j;

  for(i = 0; s1[i] != '\0'; i++)
    for(j = 0; s2[j] != '\0'; j++)
      if(s1[i] == s2[j])
	return i;
  return -1;
}
