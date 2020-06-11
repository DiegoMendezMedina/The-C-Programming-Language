#include <stdio.h>

main(){
  int c;
  while((c = getchar()) != EOF){
    if(c == 9)
      printf("\t");
    else if( c == 8)
      printf("\b");
    else if (c == 92)
      printf("\\");
    else
      printf("%c",c);
  }
}
