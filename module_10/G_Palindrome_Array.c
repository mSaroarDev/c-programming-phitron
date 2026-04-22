#include <stdio.h>
int main()
{
  int size;
  scanf("%d", &size);

  int arr[size];

  for (int i = 0; i < size; i++)
  {
    scanf("%d", &arr[i]);
  }

  int i = 0;
  int j = size - 1;

  int hasNoPrinted = 0;

  while (i < j)
  {

    if(arr[i] != arr[j])
    {
      printf("NO");
      hasNoPrinted = 1;
      break;
    } 

    i++;
    j--;

  }

  if(hasNoPrinted == 0)
  {
    printf("YES");  
  }


  return 0;
}