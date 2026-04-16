#include <stdio.h>
int main(){
  int num;
  scanf("%d", &num);

  int arr[num];

  for (int i = 0; i < num; i++)
  {
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < num; i++)
  {
    if(arr[i] % 2 == 0)
    {
      printf("%d ", arr[i]);
    }
  }
  
  
  return 0;
}