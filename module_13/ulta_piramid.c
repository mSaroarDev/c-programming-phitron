#include <stdio.h>
int main(){
  int n;
  scanf("%d", &n);

  int star = 1;

  for (int i = 0; i < n; i++)
  {
    
    for (int j = 1; j >= n; j++)
    {
      printf("*");
    }
    
    printf("\n");
    star-=2;
  }
  
  return 0;
}