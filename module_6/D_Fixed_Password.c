#include <stdio.h>
int main(){
  int a;

  int correctPassword = 1999;

  while (scanf("%d", &a) != EOF)
  {
    if(a == correctPassword){
      printf("Correct\n");
      break;
    } else {
      printf("Wrong\n");
    }
  }
  
  return 0;
}