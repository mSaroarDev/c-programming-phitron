#include <stdio.h>
#include <stdbool.h>
int main(){
  int r, c;
  scanf("%d %d", &r, &c);

  if(r != c)
  {
    printf("NO");
    return;
  }

  int arr[r][c];

  for(int i = 0; i < r; i++)
  {
    for(int j = 0; j < c; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }

  bool is_no_printed = false;

  for(int i = 0; i < r; i++)
  {
    for(int j = 0; j < c; j++)
    {
      if(arr[i] == arr[j])
      {
        if(arr[i][j] != 1)
        {
          printf("NO");
          is_no_printed = true;
          break;
        }
      }

      if(arr[i] != arr[j])
      {
        if(arr[i][j] != 0)
        {
          printf("NO");
          is_no_printed = true;
          break;
        }
      }
    }
  }

  if(is_no_printed == false)
  {
    printf("YES");
  }

  return 0;
}