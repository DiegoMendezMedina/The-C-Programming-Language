#include <stdio.h>

void swap(int *px, int *py);
int main(){
  int x = 10, y = 50;
  printf("--Pre-swap--\n x:%d \n y:%d\n", x, y);
  swap(&x, &y);
  printf("--Post-swap--\n x:%d \n y:%d\n", x, y);
}
void swap(int *px, int *py){
  int temp;

  temp = *px;
  *px = *py;
  *py = temp;
}
