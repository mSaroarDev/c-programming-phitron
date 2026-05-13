#include <stdio.h>
int main(){
  int n;
  scanf("%d", &n);

  int arr[n][n];

  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < n; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }


  int sum_of_primary_diag = 0;
  int sum_of_secondary_diag = 0;

  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < n; j++)
    {
      if(arr[i] == arr[j])
      {
        sum_of_primary_diag = sum_of_primary_diag + arr[i][j];
      }
    }
  }

  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < n; j++)
    {
      if((i + j) == (n - 1))
      {
        sum_of_secondary_diag = sum_of_secondary_diag + arr[i][j];
      }
    }
  }

  int sum_diff = sum_of_primary_diag - sum_of_secondary_diag;

  if(sum_diff < 0)
  {
    printf("%d", sum_diff * -1);
  }
  else 
  {
    printf("%d", sum_diff);
  }

  return 0;
}