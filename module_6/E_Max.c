#include <stdio.h>
#include <limits.h>
int main(){
  int a;
  int b;

  scanf("%d", &a);

  int max = INT_MIN;

  for(int i = 1; i <= a; i++){
    scanf("%d", &b);
    if(max < b){
      max = b;
    } 
  }

  printf("%d", max);

  return 0;
}