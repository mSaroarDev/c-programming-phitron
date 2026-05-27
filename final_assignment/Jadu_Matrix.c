#include <stdio.h>
#include <stdbool.h>

int main(){
  int r, c;
  scanf("%d %d", &r, &c);

  int arr[r][c];

  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }

  bool is_no_printed = false;

  if (r != c)
  {
    printf("NO");
    is_no_printed = true;
    return 0;
  }

  for(int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      if (i == j && arr[i][j] != 1)
      {
        printf("NO");
        is_no_printed = true;
        return 0;
      }
    }
  }

  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      if (i + j == r - 1 && arr[i][j] != 1)
      {
        if (is_no_printed == false)
        {
          printf("NO");
          is_no_printed = true;
          return 0;
        }
      }
    }
  }

  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      if (i + j != r - 1 && i != j && arr[i][j] != 0)
      {
        if (is_no_printed == false)
        {
          printf("NO");
          is_no_printed = true;

          return 0;
        }
      }
    }
  }

  if (is_no_printed == false)
  {
    printf("YES");
  }

  return 0;
}