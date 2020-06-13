#include <stdio.h>

#define IN 1
#define OUT 0
main(){
  int c, nl;
  int state = OUT;
  while((c = getchar()) != EOF){
    if(c == 32 || c == 8 || c == 10){
      state = OUT;
      printf("\n");
    }
    else{
      printf("%c",c);
      if (state = OUT)
	state = IN;       
    }
  }
}
