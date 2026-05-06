#include <stdio.h>

void minMax()
{
  int num;
  scanf("%d", &num);

  int arr[num];
  for (int i = 0; i < num; i++)
  {
    scanf("%d", &arr[i]);
  }

  int min = 100000;
  int max = 0;

  for(int i = 0; i < num; i++)
  {
    if(arr[i] > max)
    {
      max = arr[i];
    }

    if(arr[i] < min)
    {
      min = arr[i];
    }
  }

  printf("%d ", min);
  printf("%d", max);
}

int main()
{
  minMax();
  return 0;
}