#include <stdio.h>
int main(){
  int n;
  scanf("%d", &n);

  char str[n];
  scanf("%s", str);

  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    int value = str[i] - 48;
    sum = sum + value;
  }

  printf("%d", sum);
  
  return 0;
}