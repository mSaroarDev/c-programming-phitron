#include <stdio.h>
int main()
{
  int num;
  scanf("%d", &num);

  int arr[num];
  for (int i = 0; i < num; i++)
  {
    scanf("%d", &arr[i]);
  }

  int x;
  scanf("%d", &x);

  int idx = -1;

  for (int i = 0; i < num; i++)
  {
    if (x == arr[i])
    {
      idx = i;
      break;
    }
  }

  printf("%d", idx);

  return 0;
}