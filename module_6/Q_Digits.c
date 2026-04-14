#include <stdio.h>
int main()
{
  int x;
  scanf("%d", &x);

  for (int i = 0; i <= x; i++)
  {
    int n;
    scanf("%d", &n);

    do
    {
      int val = n % 10;
      printf("%d ", val);

      n = n / 10;
    } while (n != 0);
    printf("\n");
  }

  return 0;
}