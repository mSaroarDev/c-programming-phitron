#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  int max = arr[0], min = arr[0];
  int maxIdx = 0, minIdx = 0;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
      maxIdx = i;
    }

    if (arr[i] < min)
    {
      min = arr[i];
      minIdx = i;
    }
  }

  int tmp = arr[maxIdx];
  arr[maxIdx] = arr[minIdx];
  arr[minIdx] = tmp;

  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  

  return 0;
}