#include <stdio.h>
int main()
{
  int number;
  scanf("%d", &number);

  int firstDigit = number / 10;
  int lastDigit = number % 10;

  if (lastDigit == 0)
  {
    printf("YES");
  }
  else if ((firstDigit % lastDigit == 0) || (lastDigit % firstDigit == 0))
  {
    printf("YES");
  }
  else
  {
    printf("NO");
  }

  return 0;
}