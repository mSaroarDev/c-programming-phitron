#include <stdio.h>

void shiftZero(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    if (arr[i] != 0)
    {
      printf("%d ", arr[i]);
    }
  }

  for (int i = 0; i < n; i++)
  {
    if (arr[i] == 0)
    {
      printf("%d ", arr[i]);
    }
  }
}

int main()
{
  int n;
  scanf("%d", &n);

  int arr[n];

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  shiftZero(arr, n);

  return 0;
}