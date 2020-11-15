#include <stdio.h>
/* 1-12: prints the input one word per line 
   For any comment or suggestion, feel free to make a pull request or 
   contact me at diegomm@ciencias.unam.mx */
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
