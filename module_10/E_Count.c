#include <stdio.h>
#include <string.h>
int main(){
  char str[1000001];
  scanf("%s", str);

  int sizeOfInput = strlen(str);
  int sum = 0;

  for (int i = 0; i < sizeOfInput; i++)
  {
    char toNumber = str[i] - 48; // '0' = 48 
    sum += toNumber;
  }

  printf("%d", sum);
  
  return 0;
}