#include <stdio.h>
#include <string.h>

/**
 * Excercise 3-3: Write a function expand(s1, s2) that expands shorthand
 *                notations like a-z, in the string s1 into the equivalent
 *                complete list abc...xyz in s2. Allow for letters of either 
 *                case and digits, and be prepared to handle cases like a-b-c
 *                and a-z0-9 and -a-z. Arrange that a leading or trailing - is
 *                taking literally.
 */

void expand(char s1[], char s2[]);

int main(){
  char s1[10];
  char s2[100];
  scanf("%s", s1);
  expand(s1, s2);
  printf("%s\n", s2);
}

/**
 * expand: solutions of problem 3-3. Takes as granted s2 has space enough.
 */
void expand(char s1[], char s2[]){
  int ls1, cont, move, i, check, ss;
  char aux;

  ls1 = strlen(s1);
  i = 0;     
  check = 0; // variable to check if there's a '-' as final character.
  
  if(s1[0] == '-' && s1[1] != '-'){
    i = 1;
    s2[0] = '-';
  }

  if(s1[ls1-1] == '-')
    check = 1;
  
  cont = i;
  move = i+2;
 
  
  for(; i < ls1-1; i +=3){
    int c1, c2;
    
    c1 = s1[i];
    c2 = s1[i+2];
    aux = s1[move];

    if((c1+1) == c2){
      s2[cont++] = c1;
      if(i >= ls1-3)
	s2[cont++] = c2;
      i--;
    }
    else{
      if(ls1 >= move+3)
	move += 3;
      
      if(s1[i] == '-')
	i--;
      
      if(i <= ls1 -3)
	for(int j = s1[i]; j <= c2; j++)
	  s2[cont++] = j;
    }
  }
  
  if(check == 1){
    s2[cont++] = '-';
  }
  
  s2[cont] = '\0';
}
