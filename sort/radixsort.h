#ifndef RADIXSORT_H
#define RADIXSORT_H

struct Data {
  int data[3];
};

void sorton(struct Data A[], int d, int k, int l);
void radixsort0(struct Data A[], int d, int k, int l);

#endif
