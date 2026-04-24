#include <stdio.h>
int main()
{
  int t;
  scanf("%d", &t);

  for (int j = 0; j < t; j++)
  {
    char s1[10001];
    scanf("%s", s1);

    int capital = 0;
    int small = 0;
    int digit = 0;

    for (int i = 0; i < strlen(s1); i++)
    {
      if (s1[i] >= 65 && s1[i] <= 90)
      {
        capital++;
      }
      else if (s1[i] >= 97 && s1[i] <= 122)
      {
        small++;
      }
      else if (s1[i] >= 48 && s1[i] <= 57)
      {
        digit++;
      }
    }

    printf("%d %d %d\n", capital, small, digit);
  }

  return 0;
}