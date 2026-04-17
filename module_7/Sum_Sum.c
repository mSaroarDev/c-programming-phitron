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

  int sumOfPosNum = 0;
  int sumOfNegNum = 0;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] > 0)
    {
      sumOfPosNum += arr[i];
    }
    else if (arr[i] < 0)
    {
      sumOfNegNum += arr[i];
    }
  }

  printf("%d ", sumOfPosNum);
  printf("%d", sumOfNegNum);

  return 0;
}