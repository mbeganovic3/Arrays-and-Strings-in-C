#include <stdio.h>
#include <string.h>
int main () {

  int length, n;

  printf("Please enter the starting number of the Collatz sequence:\n");

  scanf("%d",&n);

  while(n != 1){
      printf("%d, ",n);

      if((n % 2) == 0) n /= 2;
      else n = 3*n + 1;                
  }
      printf("%d\n",n);

}
