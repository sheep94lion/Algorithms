#include <stdio.h>
#include "bucketsort.h"

int main(){
  int n;
  float A[100];
  scanf("%d", &n);
  int i;
  for(i = 0; i < n; i++){
    scanf("%f", &A[i]);
  }
  bucketsort(A, n);
  for(i = 0; i < n; i++){
    printf("%f\n", A[i]);
  }
  return 0;
}
