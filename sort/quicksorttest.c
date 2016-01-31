#include <stdio.h>
#include "quicksort.h"

int main(){
  int n;
  int A[200];
  scanf("%d", &n);
  int i;
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  randomized_quicksort(A, 0, n-1);
  for (i = 0; i < n; i++){
    printf("%d\n", A[i]);
  }
  return 0;
}
