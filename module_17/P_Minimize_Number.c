#include <stdio.h>
#include <stdbool.h>

int main(){
  int n;
  scanf("%d", &n);

  int arr[n];
  for(int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  bool is_stopped = false;
  int count = 0;

  while(is_stopped != true)
  {
    for(int i = 0; i < n; i++)
    {
      if(arr[i] % 2 == 0)
      {
        arr[i] = arr[i] / 2;
      }
      else 
      {
        is_stopped = true;
        break;
      }
    }
    if(is_stopped != true)
    {
      count++;
    } 
  }

  printf("%d", count);
  return 0;
}