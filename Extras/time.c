#include <stdio.h>
#include <time.h>

int raise(int b, int n);
int main(){
  int s, r;
  scanf("%d" , &s);
  
  clock_t begin = clock();
  r = 1 << s;
  printf("2^%d: %d\n", s, r);
  clock_t end = clock();
  double time_spent = (double)(end-begin)/ CLOCKS_PER_SEC;
  printf("<<: %f\n", time_spent);
  
  begin = clock();
  r = raise(2, s);
  printf("2^%d: %d\n", s, r);
  end = clock();
  time_spent = (double)(end-begin)/ CLOCKS_PER_SEC;
  printf("recursive: %f\n", time_spent);
}

int raise(int b, int n){
  if(n == 0)
    return 1;
  else
    return raise(b, n-1)*b;
}
