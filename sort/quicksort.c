#include "quicksort.h"
#include <time.h>
#include <stdlib.h>

int partition(int A[], int p, int r){
  int x = A[r];
  int i = p - 1;
  int j, temp;
  for(j = p; j < r; j++){
    if(A[j] <= x){
      i++;
      temp = A[j];
      A[j] = A[i];
      A[i] = temp;
    }
  }
  temp = A[i+1];
  A[i+1] = A[r];
  A[r] = temp;
  return (i+1);
}

void quicksort(int A[], int p, int r){
  int q;
  if (p < r){
    q = partition(A, p, r);
    quicksort(A, p, q-1);
    quicksort(A, q+1, r);
  }
}

int randomized_partition(int A[], int p, int r){
  srand((unsigned)time(NULL));
  int i = rand()%(r-p+1) + p;
  int temp = A[i];
  A[i] = A[r];
  A[r] = temp;
  return partition(A, p, r);
}

void randomized_quicksort(int A[], int p, int r){
  int q;
  if(p < r){
    q = randomized_partition(A, p, r);
    randomized_quicksort(A, p, q-1);
    randomized_quicksort(A, q+1, r);
  }
}
