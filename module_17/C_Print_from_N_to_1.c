#include <stdio.h>

void recursion(int n, int i)
{
  if(n+1 == i)
  {
    return;
  }

  recursion(n, i+1);
  if(i == 1)
  {
    printf("%d", i);
  }
  else{
    printf("%d ", i);
  }
}

int main()
{
  int n;
  scanf("%d", &n);

  int i = 1;
  recursion(n, i);
  return 0;
}