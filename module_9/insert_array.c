#include <stdio.h>
int main()
{
  int num; // 5
  scanf("%d", &num);

  int arr[num + 1];
  for (int i = 0; i < num; i++)
  {
    scanf("%d", &arr[i]);
  }

  int idx, value;
  scanf("%d %d", &idx, &value);

  for (int i = num ; i >= idx; i--)
  {
    arr[i] = arr[i-1];
  }

  arr[idx] = value;

  for (int i = 0; i <= num; i++)
  {
    printf("%d ", arr[i]);
  }
  return 0;
}