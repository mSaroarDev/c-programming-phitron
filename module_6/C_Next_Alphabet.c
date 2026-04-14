#include <stdio.h>
int main(){
  char charecter;
  scanf("%c", &charecter);
  
  if(charecter == 'z')
  {
    printf("%c", 'a');
  } 
  else 
  {
    int nextChar = charecter + 1;
    printf("%c", nextChar);
  }
  

  return 0;
}