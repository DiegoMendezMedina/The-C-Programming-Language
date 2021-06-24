#include <stdio.h>

void shellshort(int v[], int n);
void print_arr(int v[], int n);

int main(){
  int in[] = {12, 56, 34, 12, 100};
  shellshort(in, 5);
  print_arr(in, 5);
}

void shellshort(int v[], int n){
  int gap, i, j, temp;
  for(gap = n/2; gap > 0; gap /= 2)
    for(i = gap; i < n; i++)
      for(j = i - gap; j >= 0 && v[j] > v[j+gap]; j -= gap){
	temp = v[j];
	v[j] = v[j+gap];
	v[j+gap] = temp;
      }
}
void print_arr(int v[], int n){
  for(int i = 0; i < n; i++)
    printf("%d ", v[i]);
  printf("\n");
}
