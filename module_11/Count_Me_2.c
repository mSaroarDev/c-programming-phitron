#include <stdio.h>
#include <string.h>
int main()
{
  char s[100001];
  scanf("%s", s);

  int input_length = strlen(s);

  int consonants_count = 0;

  for (int i = 0; i < input_length; i++)
  {
    if (
        s[i] == 'a' ||
        s[i] == 'e' ||
        s[i] == 'i' ||
        s[i] == 'o' ||
        s[i] == 'u')
    {
      continue;
    }
    else
    {
      consonants_count++;
    }
  }

  printf("%d", consonants_count);

  return 0;
}