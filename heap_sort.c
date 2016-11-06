#include <stdio.h>
#include <stdlib.h>

void swap(int *arg1, int *arg2) {
  
  int c = 0;
  
  c = *arg1;
  *arg1 = *arg2;
  *arg2 = c;
}


void heapify (int pos, int n, int *arr) {
  
  int t;
  
  while (2 * pos + 1 < n) {   
    t = 2 * pos + 1;
    if ((2 * pos + 2 < n) && (arr[2 * pos + 2] >= arr[t])) {
      t = 2 * pos + 2;
    }
    if (arr[pos] < arr[t]) {
      swap(&arr[pos], &arr[t]);
      pos = t;
    }
    else break;
       
  }
}

void heap_make(int n, int *arr) {
  
  int i;
  
  for (i = n - 1; i >= 0; i--) {
    heapify(i, n, arr);
  }
}

void heap_sort(int n, int *arr) {
  heap_make(n, arr);
  while(n > 0) {
    swap(&arr[0], &arr[n-1]);
    n--;
    heap_make(n, arr);
  }
}


int main() {

  int number_elem, i;
  int *arr;

  printf("Enter number of elements\n");
  scanf("%d", &number_elem);
  printf("\n");

  arr = (int*) malloc(number_elem * sizeof(int));
  for (i = 0; i < number_elem; i++) {
    scanf("%d", &arr[i]);
  }
  
  heap_sort(number_elem, arr);
  
  for (i = 0; i < number_elem; i++) {
     printf("%d, ", arr[i]);
  }
  printf("\n");
  
  free(arr);
  return 0;
}


  

