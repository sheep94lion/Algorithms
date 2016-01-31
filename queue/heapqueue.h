#ifndef HEAPQUEUE_H
#define HEAPQUEUE_H

#include "heapsort.h"

int heap_maximum(struct HeapInt* pH);
int heap_extract_max(struct HeapInt* pH);
void max_heap_insert(struct HeapInt* pH, int key);

#endif
