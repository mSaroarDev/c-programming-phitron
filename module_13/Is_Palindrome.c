#include <stdio.h>
#include <string.h>
int is_palindrome(char s[])
{
  int length = strlen(s);

  int flag = 1;

  for (int i = 0, j = length - 1; i <= j; i++, j--)
  {
    if (s[i] != s[j])
    {
      flag = 0;
      break;
    }
  }

  if (flag == 1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int main()
{
  char s[1001];
  scanf("%s", s);

  int val = is_palindrome(s);

  if(val == 1)
  {
    printf("Palindrome");
  }
  else{
    printf("Not Palindrome");
  }
  return 0;
}