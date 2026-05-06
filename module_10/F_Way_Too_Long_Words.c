#include <stdio.h>
#include <string.h>
int main()
{
  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    char str1[101];
    scanf("%s", str1);
    if (strlen(str1) > 10)
    {
      printf("%c", str1[0]);
      printf("%d", strlen(str1) - 2);
      printf("%c\n", str1[strlen(str1) - 1]);
    }
    else
    {
      printf("%s\n", str1);
    }
  }

  return 0;
}