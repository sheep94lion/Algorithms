#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "heapqueue.h"

int heap_maximum(struct HeapInt* pH){
  return pH->array[0];
}

int heap_extract_max(struct HeapInt* pH){
  int max;
  if(pH->heapsize < 1) {
    exit(EXIT_FAILURE);
  }
  max = pH->array[0];
  pH->array[0] = pH->array[pH->heapsize-1];
  pH->heapsize--;
  max_heapify(pH, 0);
  return max;
}

void heap_increase_key(struct HeapInt* pH, int i, int key){
  if (key < pH->array[i]){
    exit(EXIT_FAILURE);
  }
  pH->array[i] = key;
  int temp;
  while (i > 0 && pH->array[PARENT(i)] < pH->array[i]){
    temp = pH->array[PARENT(i)];
    pH->array[PARENT(i)] = pH->array[i];
    pH->array[i] = temp;
    i = PARENT(i);
  }
}

void max_heap_insert(struct HeapInt* pH, int key){
  pH->heapsize++;
  pH->arraysize++;
  pH->array[pH->heapsize-1] = INT_MIN;
  heap_increase_key(pH, pH->heapsize-1, key);
}
