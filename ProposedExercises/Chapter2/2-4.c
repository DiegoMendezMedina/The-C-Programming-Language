#include <stdio.h>

/**
 * Excercise 2-4: Write an alternate version of squeeze(s1, s2)
 * that deletes each character in s1 that matches any character 
 * in the string s2. 
 */

void squeeze(char s1[], char s2[]);

int main(){
  char s1[100];
  char s2[100];

  scanf("%s", s1);
  scanf("%s", s2);
  squeeze(s1, s2);
  printf("%s\n", s1);
}

/**
 *squeeze: deletes each character in s1 that mantches any character in s2. 
 * @param s1, s2: strings to compare.
*/
void squeeze(char s1[], char s2[]){
  int i, j;

  for(i = j = 0; s1[i] != '\0'; i++)
    if(s1[i] != s2[i])
      s1[j++] = s1[i];
  s1[j] = '\0';
}
