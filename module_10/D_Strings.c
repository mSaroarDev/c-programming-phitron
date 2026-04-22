#include <stdio.h>
#include <string.h>
int main(){
  char a[11];
  char b[11];

  scanf("%s", a);
  scanf("%s", b);

  int len_a = strlen(a); // 4
  int len_b = strlen(b); // 2

  char c[11+11];
  
  for(int i = 0; i < len_a; i++)
  {
    c[i] = a[i]; 
  }

  for(int i = 0; i < len_a + len_b; i++)
  {
    c[i+len_a] = b[i]; 
  }

  printf("%d %d\n", len_a, len_b);
  printf("%s\n", c);

  int tmp = a[0];
  a[0] = b[0];
  b[0] = tmp;

  printf("%s ", a);
  printf("%s", b);
  return 0;
}