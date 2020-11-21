#include <stdio.h>

/**
 * Excercise 2-3: Write the function htoi(s), which converts a string of 
 * hexadecimal digits (including an optional 0x or 0X) into its equivalent 
 * integer value. 
 * The allowable digits are 0 through 9, a through f, and A through F.
 */

int htoi(char s[]);
int hexa_to_int(char s);
int get_decimal(int hexa[], int cont);
int eleva(int base, int exp);

void main(){
  char s[100];
  int res;
  
  scanf("%s", s);
  res = htoi(s);
  if(res >= 0)
    printf("%d\n",res);
  else
    printf("Invalid Input\n");
}

/**
 * htoi: converts a string of heximal digits into its equivalent decimal value;
 * first two arguments of the string need to be 0x or 0X. 
 * If the string received has an invalid character the function returns 
 * the equivalent decimal value to the string before the invalid character.
 * @param s, String with heximal digits.
 * @return the equivalent decimal value of the hexadecimal value represented on
 * s.
 */
int htoi(char s[]){
  int cont = 0;

  if(s[0] != '0' || (s[1] != 'x' && s[1] != 'X'))
     return -1;
    
  for(int i = 2; (s[i]>= '0' && s[i] <= '9') || (s[i] >= 'a' && s[i] <= 'f')
	|| (s[i] >= 'A' && s[i] <= 'F'); i++, cont++)
    ;
  
  int hexa[cont];
  
  for(int i = 2; (s[i]>= '0' && s[i] <= '9') || (s[i] >= 'a' && s[i] <= 'f')
	|| (s[i] >= 'A' && s[i] <= 'F'); i++)
    hexa[i-2] = hexa_to_int(s[i]);
  
  return get_decimal(hexa, cont);
}

/**
 * hexa_to_int: converts a character of hexadecimal value into its equivalent
 * decimal value. 
 * @param s: character with hexadecimal value.
 * @return decimal value represented on s.
 */
int hexa_to_int(char s){
  if(s == 'a' || s == 'A')
    return 10;
  if(s == 'b' || s == 'B')
    return 11;
  if(s == 'c' || s == 'C')
    return 12;
  if(s == 'd' || s == 'D')
    return 13;
  if(s == 'e' || s == 'E')
    return 14;
  if(s == 'f' || s == 'F')
    return 15;
  return s - '0';
}

/**
 * get_decimal: converts an integer array with the decimal values of an 
 * hexadecimal number to it's decimal value. 
 * @param hexa: integer array, represents the hexadecimal number.
 * @param cont: hexa length.
 *@return the decimal value of the hexadecimal represented on the array.
 */
int get_decimal(int hexa[], int cont){
  int res = 0;
  int exp = cont-1;
  
  for(int i = 0; i < cont; i++){
    res += hexa[i] * eleva(16, exp--);
  }
  return res;
}

/**
 * eleva: Raise one number.
 * @param base: number to raise.
 * @param exp: power the base will be raised.
 */
int eleva(int base, int exp){
  if(exp == 0)
    return 1;
  else
    return base * eleva(base, exp -1);
}
