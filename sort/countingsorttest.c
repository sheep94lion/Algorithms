#include <stdio.h>
#include "countingsort.h"

int main(){
  int n;
  int A[100], B[100];
  scanf("%d", &n);
  int i;
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  countingsort(A, B, 100, n);
  for(i = 0; i < n; i++){
    printf("%d\n", B[i]);
  }
  return 0;
}
