#include <stdio.h>
int main(){
  int n;
  scanf("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]); 
  }

  int cnt_2 = 0;
  int cnt_3 = 0;

  for (int i = 0; i < n; i++)
  {
    if(arr[i] % 2 == 0)
    {
      cnt_2++;
    }

    if(arr[i] % 2 == 0 && arr[i] % 2 == 0)
    {
      continue;
    }

    if(arr[i] % 3 == 0 && arr[i] % 2 != 0)
    {
      cnt_3++;
    }
  }

  printf("%d %d", cnt_2, cnt_3);
  
  
  return 0;
}