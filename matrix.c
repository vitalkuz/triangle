#include <stdio.h>

int main() {
  
  int matrix[100][100];
  int i, j, n, m, c;
  
  printf("Enter number lines\n");
  scanf("%d", &n);
  printf("\nEnter number columns\n");
  scanf("%d", &m);
  printf("\n");
  
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      scanf("%d ", &matrix[i][j]);
    }
    printf("\n");
  }
  
  for (i = 0; i < n + 1; i++) {
    for (j = i; j < m + 1; j++) {
      c = matrix[i][j];
      matrix[i][j] = matrix[j][i];
      matrix[j][i] = c;
    }
  }
  
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }
  return 0;
}

