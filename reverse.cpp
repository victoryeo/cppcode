#include <stdio.h>

void recursive(int *ar, int size) {
  int start = 0, end =size -1, temp;

  if (start < end) {
    temp = ar[start];
    ar[start] = ar[end];
    ar[end] = temp;
    start++;
    end--;
    recursive(ar +1, size - 2);
  }
}

int main() {
  int ar0[8] = {0,1,2,3,4,5,6};
  int size = sizeof(ar0)/sizeof(int);
  for (int i = 0; i < size; i++) {
    printf("%d ",ar0[i]);
  }
  recursive(ar0, size);
  for (int i = 0; i < size; i++) {
    printf("%d ",ar0[i]);
  }
  return 0;
}
