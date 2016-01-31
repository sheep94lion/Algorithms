#include <stdio.h>
#include "heapsort.h"

void max_heapify(struct HeapInt *pH, int i){
  int l = LEFT(i);
  int r = RIGHT(i);
  int largest;
  int temp;
  if (l < pH->heapsize && pH->array[l] > pH->array[i]) {
    largest = l;
  } else {
    largest = i;
  }
  if (r < pH->heapsize && pH->array[r] > pH->array[largest]) {
    largest = r;
  }
  if (largest != i) {
    temp = pH->array[i];
    pH->array[i] = pH->array[largest];
    pH->array[largest] = temp;
    max_heapify(pH, largest);
  }
}

void build_max_heap(struct HeapInt* pH){
  int i;
  pH->heapsize = pH->arraysize;
  for (i = PARENT(pH->arraysize-1); i >= 0; i--){
    max_heapify(pH, i);
  }
}

void heapsort(int A[], int l){
  struct HeapInt H;
  H.heapsize = 0;
  H.arraysize = l;
  H.array = A;
  build_max_heap(&H);
  int i, temp;
  for(i = l - 1; i >= 1; i--){
    temp = H.array[0];
    H.array[0] = H.array[i];
    H.array[i] = temp;
    H.heapsize--;
    max_heapify(&H, 0);
  }
}
