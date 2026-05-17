#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    long long int result;
    scanf("%lld", &result);

    int temp = 1;

    int arr[3];
    for (int i = 0; i < 3; i++)
    {
      scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 3; i++)
    {
      temp = temp * arr[i];
    }

    long long int num = result / temp;
    if (result % temp == 0)
    {
      printf("%lld", num);
    }
    else
    {
      printf("%d", -1);
    }

    printf("\n");
  }

  return 0;
}