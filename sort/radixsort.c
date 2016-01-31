#include "radixsort.h"
#include <stdlib.h>

void sorton(struct Data A[], int d, int k, int l){
  int *C = (int*)malloc((k+1)*sizeof(int));
  struct Data *B = (struct Data*)malloc(l*sizeof(struct Data));
  int i, j, index;
  for(i = 0; i <= k; i++){
    C[i] = 0;
  }
  for(j = 0; j < l; j++){
    C[A[j].data[d]]++;
  }
  for(i = 1; i <= k; i++){
    C[i] += C[i-1];
  }
  for(j = l-1; j>= 0; j--){
    index = C[A[j].data[d]]-1;
    B[index] = A[j];
    //B[index].data[0] = A[j].data[0];
    //B[index].data[1] = A[j].data[1];
    //B[index].data[2] = A[j].data[2];
    C[A[j].data[d]]--;
  }
  free(C);
  for(i = 0; i < l; i++){
    A[i] = B[i];
    //A[i].data[0] = B[i].data[0];
    //A[i].data[1] = B[i].data[1];
    //A[i].data[2] = B[i].data[2];
  }
}

void radixsort0(struct Data A[], int d, int k, int l){
  int i;
  for(i = 0; i < d; i++){
    sorton(A, i, k, l);
  }
}
