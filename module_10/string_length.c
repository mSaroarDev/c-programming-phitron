#include <stdio.h>
#include <string.h>
int main()
{
  char str[100];
  scanf("%s", str);

  // int count = 0;

  // for(int i = 0; i <= 100; i++)
  // {
  //   if(str[i] != '\0')
  //   {
  //     count++;
  //   } else {
  //     break;
  //   }
  // }

  // for (int i = 0; str[i] != '\0'; i++)
  // {
  //   count++;
  // }

  int size = strlen(str);

  printf("%d", size);
  return 0;
}