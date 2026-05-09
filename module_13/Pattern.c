#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);

  int hash = 1;
  int space = n - 2;

  int isEven = 0;
  if (n % 2 == 0)
  {
    isEven = 1;
  }
  else
  {
    isEven = 0;
  }

  for (int i = 1; i <= n; i++)
  {
    // space
    for (int j = space; j >= 0; j--)
    {
      printf(" ");
    }

    for (int j = 1; j <= hash; j++)
    {
      if (i % 2 == 0)
      {
        printf("-");
      }
      else
      {
        printf("#");
      }
    }

    printf("\n");
    hash += 2;
    space--;
  }

  int hash2 = hash - 4; // 5
  int space2 = 1;
  // printf("hash2  -> %d", hash2);

  // print part 2
  for (int j = 1; j < n; j++)
  {
    // space
    for (int k = 1; k <= space2; k++)
    {
      printf(" ");
    }

    for (int k = 1; k <= hash2; k++)
    {

      // isEven
      if (isEven)
      {
        if (j % 2 == 0)
        {
          printf("-");
        }
        else
        {
          printf("#");
        }
      }
      else
      {
        if (j % 2 == 0)
        {
          printf("#");
        }
        else
        {
          printf("-");
        }
      }
    }

    printf("\n");

    hash2 = hash2 - 2;
    space2 = space2 + 1;
  }

  return 0;
}