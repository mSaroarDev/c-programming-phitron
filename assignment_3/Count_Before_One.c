#include <stdio.h>

int count_before_one(int a[], int n)
{
  int count = 0;
  int flag = 0;

  for(int i = 0; i < n; i++)
  {
    if(a[i] != 1 && flag != 1)
    {
      count++;
    }
    
    if(a[i] == 1)
    {
      flag = 1;
      break;
    }
  }

  return count;
}

int main()
{
  int n;
  scanf("%d", &n);

  int a[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }

  int count = count_before_one(a, n);
  printf("%d", count);

  return 0;
}