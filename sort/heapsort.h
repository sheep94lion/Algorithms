#ifndef HEAPSORT_H
#define HEAPSORT_H

#define PARENT(i) (((i)-1)/2)
#define LEFT(i) (2*(i)+1)
#define RIGHT(i) (2*(i+1))

struct HeapInt {
  int heapsize;
  int arraysize;
  int *array;
};

void max_heapify(struct HeapInt *pH, int i);
void build_max_heap(struct HeapInt* pH);
void heapsort(int A[], int l);

#endif
