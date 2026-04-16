#include <stdio.h>
int main(){
  int num;
  scanf("%d", &num);

  int arr[num];
  long long int sum = 0;

  for (int i = 0; i < num; i++)
  {
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < num; i++)
  {
    sum += arr[i];
  }

  if(sum >= 0)
  {
    printf("%lld", sum);
  } 
  else 
  {
    printf("%lld", sum * -1);
  }

  return 0;
}