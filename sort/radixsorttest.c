#include <stdio.h>
#include "radixsort.h"
#include <stdlib.h>
#include <time.h>

int main(){
  struct Data A[5];
  srand((unsigned)time(NULL));
  int i, j;
  for(i = 0; i < 5; i++){
    for(j = 0; j < 3; j++){
      A[i].data[j] = rand() % 10;
      printf("%d %d: %d\n", i, j, A[i].data[j]);
    }
  }
  radixsort0(A, 3, 9, 5);
  printf("*****************n\n");
  for(i = 0; i < 5; i++){
    for(j = 0; j < 3; j++){
      printf("%d %d: %d\n", i, j, A[i].data[j]);
    }
  }
  return 0;
}
