#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);

  int arr[n];

  int x;


  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  scanf("%d", &x);

  for (int i = 0; i < n; i++)
  {
    printf("%d", x);
    // if(arr[i] == x)
    // {
    //   printf("%d", arr[i]);
    //   break;
    // }
    // else
    // {
    //   printf("%d", -1);
    //   break;
    // }
  }

  return 0;
}