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

  int zeroIndex = arr[n-1];
  int valIndex = 0;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] == 0)
    {
      zeroIndex = arr[i];
      for (int j = i; j <= n-1; j++)
      {
        if(arr[j] != 0)
        {
          int tmp = arr[j];
          arr[i] = arr[j];
          arr[j] = 0;
        }
      }
    }
  }

  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  return 0;
}