#include <stdio.h>
#include <ctype.h>

/**
 * 4-2: Extend atof to handle scientific notation of the form 
 *                    123.45e-6
 *      where a floating-point number may be followed by e or E and an 
 *      optionally signed exponent.
 */

#define MAXLINE 100

int main()
{
  double sum, atof(char[]);
  char line [MAXLINE];
  int getlinee(char line[], int max);
  
  sum = 0;
  while(getlinee(line, MAXLINE) >0)
    printf("\t%g\n", sum += atof(line));
  return 0;
  
}
double atof(char s[])
{
  double val, power, powsc;
  int i, sign, powersc, signsc;
  
  for(i = 0; isspace(s[i]); i++)
    ;
  
  sign = (s[i] == '-')? -1 : 1;
  
  if(s[i] == '-' || s[i] == '+')
    i++;
  for(val = 0.0; isdigit(s[i]); i++)
    val = 10.0 * val + (s[i]-'0');
  if(s[i] == '.')
    i++;
  for(power = 1.0; isdigit(s[i]); i++){
    val = 10.0 * val + (s[i]-'0');
    power *= 10.0;
  }
  
  //4-2
  if(s[i] == 'e' || s[i] == 'E')
    i++;
  else
    return sign * val/power;

  signsc = (s[i] == '-')? -1 : 1;
  
  if(s[i] == '-' || s[i] == '+')
    i++;
  
  for(powersc = 0; isdigit(s[i]); i++)
    powersc = 10.0 * powersc + (s[i]-'0');
  for(i = 1, powsc = 1; i <= powersc; i++)
    powsc *= 10.0;
  
  if(signsc==1)
    return sign * val/power * powsc;
  
  return sign * val/(power*powsc);
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
