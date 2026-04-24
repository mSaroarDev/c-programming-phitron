#include <stdio.h>
#include <string.h>
int main()
{
  char s[1001];
  scanf("%s", s);

  int length = strlen(s);
  // printf("%d", length);

  int i = 0;
  int j = s[length - 1];

  int hasNoPrinted = 0;

  while (i < j)
  {
    if (s[i] != s[j])
    {
      printf("%c %c", s[i], s[j]);
      hasNoPrinted = 1;
      break;
    }

    i++;
    j--;
  }

  if (hasNoPrinted == 0)
  {
    printf("YES");
  }

  return 0;
}