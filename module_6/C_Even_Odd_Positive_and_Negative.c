#include <stdio.h>
int main(){
  int a;
  int b;

  int even = 0;
  int odd = 0;
  int positive = 0;
  int negative = 0;
  
  scanf("%d", &a);

  for(int i = 1; i <= a; i++){
    scanf("%d", &b);

    if(b % 2 == 0){
      even++;
    }
    if(b % 2 != 0){
      odd++;
    }
    if(b > 0){
      positive++;
    } else if (b < 0){
      negative++;
    }
  }

  printf("Even: %d\n", even);
  printf("Odd: %d\n", odd);
  printf("Positive: %d\n", positive);
  printf("Negative: %d\n", negative);

  return 0;
}