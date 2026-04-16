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

  int lowestNum = arr[0];
  int lowestNumIdx = 0;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] < lowestNum)
    {
      lowestNum = arr[i];
      lowestNumIdx = i;
    }
  }

  printf("%d ", lowestNum);
  printf("%d ", lowestNumIdx + 1);

  return 0;
}