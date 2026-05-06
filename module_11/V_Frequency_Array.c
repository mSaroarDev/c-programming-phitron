#include <stdio.h>
int main(){
  int n;
  scanf("%d", &n);

  int m;
  scanf("%d", &m);

  int arr[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }


  int freq[100001] = {0};

  for (int i = 0; i < n; i++)
  {
    int value = arr[i];
    freq[arr[i]]++;
  }

  for (int i = 1; i <= m; i++)
  {
    printf("%d\n", freq[i]);
  }
  
  
  
  return 0;
}