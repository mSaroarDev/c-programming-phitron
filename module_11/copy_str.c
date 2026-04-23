#include <stdio.h>
#include <string.h>
int main(){
  char a[10001], b[10001];

  scanf("%s %s", &a, &b); 

  int len_a = strlen(a);
  int len_b = strlen(b);

  for(int i = 0; i <= len_b; i++)
  {
    a[i+len_a] = b[i]; 
  }

  // strcpy(a, b);
  // strcat(a, b);

  printf("%s %s", a, b);

  return 0;
}