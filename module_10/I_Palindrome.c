#include <stdio.h>
#include <string.h>
int main()
{

  char arr[1001];

  scanf("%s", arr);

  int len = strlen(arr);

  int i = 0;
  int j = len - 1;

  int hasNoPrinted = 0;

  while (i < j)
  {

    if (arr[i] != arr[j])
    {
      printf("NO");
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