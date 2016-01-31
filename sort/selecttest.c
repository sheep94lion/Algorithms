#include "select.h"
#include <stdio.h>

int main(){
  int n, r;
  int A[100];
  scanf("%d", &n);
  scanf("%d", &r);
  int i;
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  printf("%d\n", randomized_select(A, 0, n-1, r));
  return 0;
}
