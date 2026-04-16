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

  int maxNumber = arr[0];
  int minNumber = arr[0];

  for (int i = 0; i < num; i++)
  {
    if (arr[i] > maxNumber)
    {
      maxNumber = arr[i];
    }
  }

  for (int i = 0; i < num; i++)
  {
    if (arr[i] > maxNumber)
    {
      maxNumber = arr[i];
    }
  }

  printf("%d ", maxNumber);
  printf("%d", minNumber);

  return 0;
}