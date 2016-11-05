#include <stdio.h>
#include <stdlib.h>

int max(int a, int b) {
  if (a > b) {
    return a;
  }
  else {
    return b;
  }
}

int main() {

  int **line;
  int n, m, maximum, c, i, j;
  
  printf("Enter number lines\n");
  scanf("%d", &n);
  printf("\nEnter number columns\n");
  scanf("%d", &m);
  printf("\n");
  
  maximum = max(n, m);
  
  line = (int**) calloc(maximum, sizeof(int*));
  for (i = 0; i < maximum; i++) {
    line[i] = (int*) calloc(maximum, sizeof(int));
  }
  
  for(i = 0; i < n; i++) {
    for(j = 0; j < m; j++) {
      scanf("%d ", &line[i][j]);
    }
    printf("\n");
  }
  
  for(i = 0; i < maximum; i++)
    for(j = i; j < maximum; j++){
       c = line[i][j];
       line[i][j] = line[j][i];
       line[j][i] = c;
    }
  
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      printf("%d ", line[i][j]);
    }
    printf("\n");
  }
  
  free(line);
  return 0;
} 
