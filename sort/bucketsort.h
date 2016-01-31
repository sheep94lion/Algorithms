#ifndef BUCKETSORT_H
#define BUCKETSORT_H

struct NodeFloat {
  float value;
  struct NodeFloat *next;
};

void bucketsort(float A[], int l);
void insert(float value, struct NodeFloat** lists, int index);
void freelist(struct NodeFloat* list);

#endif
