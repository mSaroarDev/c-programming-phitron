#include <stdio.h>

void recursion(int n, int i)
{
  if(n+1 == i)
  {
    return;
  }

  printf("%d\n", i);
  recursion(n, i+1);
}

int main()
{
  int n;
  scanf("%d", &n);

  int i = 1;
  recursion(n, i);
  return 0;
}