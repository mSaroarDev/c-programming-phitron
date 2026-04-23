#include <stdio.h>
#include <string.h>
int main()
{
  char s[10001];
  scanf("%s", s);

  int fre[26] = {0};
  char ch_fre[26] = {0};

  for (int i = 0; i < strlen(s); i++)
  {

    int idx = s[i] - 'a';
    fre[idx]++;
    ch_fre[idx] = s[i];
  }

  for (int i = 0; i < 26; i++)
  {
    if(fre[i] != 0)
    {
      char c = fre[i] + 'a';
      printf("%c - %d\n", ch_fre[i], fre[i]);
    }
  }

  return 0;
}