#include <stdio.h>
#include <string.h>

int is_palindrome(char s[])
{
  for(int i = 0; i < strlen(s); i++)
  {
    for(int j = strlen(s) - 1; i < j; i--)
    {
      if(s[i] != s[j])
      {
        return 0;
      }
      else 
      {
        return 1;
      }
    }
  }
}

int main(){
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
