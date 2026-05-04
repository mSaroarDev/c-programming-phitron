#include <stdio.h>
int main(){
  int n; 
  scanf("%d", &n);

  int arr[n];
  for(int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  int x;
  scanf
  ("%d", &x);

  int y = 0;

  for(int i = 0; i < n; i++)
  {
    for(int j = i + 1; j < n; j++)
    {
      if(arr[i] + arr[j] == x)
      {
        if(y == 0)
        {
          printf("YES");
        }
        y = 1;
        break;
      }
    }
  }

  if(y == 0)
  {
    printf("NO");
  }
  return 0;
}