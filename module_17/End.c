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

  for (int i = 0, j = num - 1; i <= j; i++, j--)
  {
    if(arr [i] == arr[j])
    {
      printf("%d ", arr[i]);
    }
    else 
    {
      printf("%d %d ", arr[i], arr[j]);
    }
  }

  return 0;
}