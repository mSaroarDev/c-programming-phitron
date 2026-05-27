#include <stdio.h>
int main()
{

  int t;
  scanf("%d", &t);

  for (int k = 0; k < t; k++)
  {
    int n;
    scanf("%d", &n);

    int arr_a[n];

    for (int i = 0; i < n; i++)
    {
      scanf("%d", &arr_a[i]);
    }

    int arr_b[n];
    for (int i = 0; i < n; i++)
    {
      arr_b[i] = arr_a[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
      for (int j = i + 1; j < n; j++)
      {
        if (arr_b[i] > arr_b[j])
        {
          int temp = arr_b[i];
          arr_b[i] = arr_b[j];
          arr_b[j] = temp;
        }
      }
    }

    int arr_c[n];

    for (int i = 0; i < n; i++)
    {
      int result = abs(arr_a[i] - arr_b[i]);
      arr_c[i] = result;
    }

    for (int i = 0; i < n; i++)
    {
      printf("%d ", arr_c[i]);
    }

    printf("\n");
  }

  return 0;
}