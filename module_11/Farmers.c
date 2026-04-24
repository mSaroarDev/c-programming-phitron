#include <stdio.h>
int main()
{
  int t;
  scanf("%d", &t);

  for (int i = 0; i < t; i++)
  {
    int initial_farmers, add_farmers, days;
    scanf("%d %d %d", &initial_farmers, &add_farmers, &days);

    int total_days = (days * initial_farmers) / (add_farmers + initial_farmers);

    int fewer_days = days - total_days;

    printf("%d\n", fewer_days);
  }

  return 0;
}