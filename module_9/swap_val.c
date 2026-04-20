#include <stdio.h>
int main(){
  int a = 10;
  int b = 20;

  int tmp = a;

  a = b;
  b = tmp;

  printf("%d ", a);
  printf("%d ", b);
  return 0;
}