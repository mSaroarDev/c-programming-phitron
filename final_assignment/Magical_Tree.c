#include <stdio.h>
int main(){
  int n;
  scanf("%d", &n);

  // head
  int max_star = n + 10;
  int line = max_star / 2 + 1;

  int star = 1;
  int space = max_star / 2;
  // printf("%d", space);
  // return 0;
  for(int i = 0; i < line; i++)
  {
    for(int j = space; j > 0; j--)
    {
      printf(" ");
    }

    for(int j = 1; j <= star; j++)
    {
      printf("*");
    }

    star = star + 2;
    space = space - 1;
    printf("\n");
  }

  // tail
  for(int i = 0; i < 5; i++)
  {
    for(int i = 0; i < 5; i++)
    {
      printf(" ");
    }

    for(int i = 0; i < n; i++)
    {
      printf("*");
    }

    printf("\n");
  }
  return 0;
}