#include <stdio.h>
int main(){
  int num;
  scanf("%d", &num);
  int arr[num];

  int sum = 0;

  for (int i = 0; i < num; i++)
  {
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < num; i++)
  {
    sum = sum + arr[i];
  }

  printf("%d", sum);
  
  
  return 0;
}