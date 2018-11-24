#include <stdio.h>

int min(const int* array, int count);
int main()
{ int count,lv_min;
  int array[10];
  count = 10;
  array[0] = 432;
  array[1] = 3213;
    array[2] = 241;
  array[3] = 11324;
    array[4] = 100;
  array[5] = 200;
    array[6] = 412;
  array[7] = 4312;
    array[8] = 42;
  array[9] = 312;
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
