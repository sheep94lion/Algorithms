#include "countingsort.h"
#include <stdlib.h>

void countingsort(int A[], int B[], int k, int l){
  int *C = (int*)malloc((k+1)*sizeof(int));
  int i, j;
  for(i = 0; i <= k; i++){
    C[i] = 0;
  }
  for(j = 0; j < l; j++){
    C[A[j]]++;
  }
  for(i = 1; i <= k; i++){
    C[i] += C[i-1];
  }
  for(j = l-1; j>= 0; j--){
    B[C[A[j]]-1] = A[j];
    C[A[j]]--;
  }
  free(C);
}
