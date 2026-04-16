#include <stdio.h>
int main()
{
  int num;
  scanf("%d", &num);

  int arr[num];
  int oddNumbers = 0;

  for (int i = 0; i < num; i++)
  {
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < num; i++)
  {
    if (arr[i] % 2 != 0)
    {
      oddNumbers += 1;
    }
  }

  printf("%d", oddNumbers);

  return 0;
}