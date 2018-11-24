#include <stdio.h>
#include "min.h"

int main()
{ int count,lv_min;
  int array[9];
  count = 9;
  array[0] = 432;
  array[1] = 3213;
  array[2] = 241;
  array[3] = 11324;
  array[4] = 100;
  array[5] = 200;
  array[6] = 412;
  array[7] = 4312;
  array[8] = 42;

  lv_min = min(array, count);
  printf("%d\n", lv_min);
  
  
}
int min( const int* array, int count) {
  int min = 1000000;
  int i = 0;
  for (i = 0; i < count; i++) {
  if (array[i] < min) {
        min = array[i];
  }   
  }
  return min;
}
void sum (const int* ar1, const int* ar2, int* res, int count) {
  
}
