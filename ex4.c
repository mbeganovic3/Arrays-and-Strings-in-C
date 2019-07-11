/* Example: matrices represented by 2-dimensional arrays */

#include <stdio.h>

int main()
{
  int A[3][3];    // matrix A     
  int B[3][3];    // matrix B
  int C[3][3];    // matrix to store their sum
  int rows, col;
  rows = 3;
  col = 3;
  int i, j, k;  

  // add your code below

  printf("Please enter 9 values for matrix A:\n");  

  for(i = 0; i < rows; ++i) {
      for(j = 0; j < col; ++j) {
          scanf("%d",&A[i][j]);
      }
  }

  printf("Please enter 9 values for matrix B:\n");

  for(i = 0; i < rows; ++i) {
      for(j = 0; j < col; ++j) {
          scanf("%d",&B[i][j]);
      }
  }

  printf("C = B + A =\n");

  for(i = 0; i < rows; ++i) {
      for(j = 0; j < col; ++j) {
          C[i][j] = A[i][j] + B[i][j];
          printf("%10d", C[i][j]);
      }
      printf("\n");
  }

}
