#include <stdio.h>
#include <stdlib.h>

int binsearch(int x, int v[], int n);
void selection_sort(int a[], int n);
void change(int a[], int b, int c);

int main(){
  int x, r;
  int array[100];
  
  printf("Number in [0,10]: ");
  scanf("%d", &x);
  for(int i = 0; i < 100; i++)
    array[i] = rand() % 11;
  
  selection_sort(array, 100);

  r = binsearch(x, array, 100);
  r == -1 ? printf("%d was not found\n", x) : printf("%d was found on %d\n", x, r);
}

/* binsearch: finds x in v[0] <= v[1] <= ... <= v[n-1] */
int binsearch(int x, int v[], int n){
  int low, high, mid;
  
  low = 0;
  high = n-1;
  while(low <= high){
    mid = (low+high) /2;
    if(x < v[mid])
      high = mid - 1;
    else if(x > v[mid])
      low = mid + 1;
    else /* Element was found*/
      return mid;
  }
  return -1; /* Element wasn't found*/
}
void selection_sort(int a[], int n){
  int smallest;
  int k;
  
  for(int i = 0; i < n - 1; i++){
    smallest = a[i];
    k = i;
    for(int j = i+1; j < n; j++)
      if(a[j] < smallest){
	smallest = a[j];
	k = j;
      }
    if(i != k)
      change(a, i, k);
  }
}

void change(int a[], int b, int c){
  int aux = a[b];
  a[b] = a[c];
  a[c] = aux;
}
