#include <stdio.h>
int main(){
  char a;
  scanf("%c", &a);

  if(a >= 65 && a <= 90){
    int c1 = a + 32;
    printf("%c", c1);
  }

  if(a >= 97 && a <= 122){
    int c2 = a - 32;
    printf("%c", c2);
  }
  return 0;
}