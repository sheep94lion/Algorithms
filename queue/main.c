#include <stdio.h>
#include "heapqueue.h"

int main(){
  int n, in;
  int A[200];
  scanf("%d", &n);
  int i;
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  struct HeapInt H;
  H.heapsize = n;
  H.arraysize = n;
  H.array = A;
  build_max_heap(&H);
  printf("Test max_heap_insert\n");
  for (i = 0; i < 3; i++){
    scanf("%d", &in);
    max_heap_insert(&H, in);
  }
  for (i = 0; i < n + 3; i++){
    printf("%d\n", heap_extract_max(&H));
  }
  return 0;
}
