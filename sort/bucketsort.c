#include "bucketsort.h"
#include <stdio.h>
#include <stdlib.h>

void bucketsort(float A[], int l){
  int i, index, k;
  struct NodeFloat** lists;
  struct NodeFloat* list;
  lists = (struct NodeFloat**)malloc(l*sizeof(struct NodeFloat*));
  for(i = 0; i < l; i++){
    lists[i] = NULL;
  }
  for(i = 0; i < l; i++){
    index = (int)(l*A[i]);
    insert(A[i], lists, index);
  }
  k = 0;
  for(i = 0; i < l; i++){
    list = lists[i];
    while(list){
      A[k] = list->value;
      k++;
      list = list->next;
    }
  }
  for(i = 0; i < l; i++){
    freelist(lists[i]);
  }
  free(lists);
}

void insert(float value, struct NodeFloat** lists, int index){
  struct NodeFloat* list = lists[index];
  if(list == NULL){
    list = (struct NodeFloat*)malloc(sizeof(struct NodeFloat));
    list->next = NULL;
    list->value = value;
    lists[index] = list;
    return;
  }
  struct NodeFloat* p;
  if(list->value > value){
    p = (struct NodeFloat*)malloc(sizeof(struct NodeFloat));
    p->next = list->next;
    list->next = p;
    p->value = list->value;
    list->value = value;
    return;
  }
  p = list;
  while(p->next != NULL && p->next->value < value){
    p = p->next;
  }
  struct NodeFloat* q;
  q = p->next;
  struct NodeFloat* nodefloat;
  nodefloat = (struct NodeFloat*)malloc(sizeof(struct NodeFloat));
  nodefloat->value = value;
  nodefloat->next = q;
  p->next = nodefloat;
}

void freelist(struct NodeFloat* list){
  struct NodeFloat* p;
  if(list == NULL){
    return;
  }else{
    p = list->next;
    free(list);
    freelist(p);
  }
}
