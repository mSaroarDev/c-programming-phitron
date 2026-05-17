#include <stdio.h>

void recursion(long long int arr[], int n, int i, long long int sum)
{
  if(i == n)
  {
    printf("%lld", sum);
    return;
  }

  sum = sum + arr[i];
  recursion(arr, n, i+1, sum);
}

int main()
{
  int n;
  scanf("%d", &n);

  long long int arr[n];

  for(int i = 0; i < n; i++)
  {
    scanf("%lld", &arr[i]);
  }

  int i = 0;
  long long int sum = 0;

  recursion(arr, n, i, sum);
  return 0;
}