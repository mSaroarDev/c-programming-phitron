#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  for (int i = 0; i < t; i++)
  {
    string s;
    cin >> s;

    string first_three;
    string last_three;

    int sum_of_first_three = 0;
    int sum_of_last_three = 0;

    for (int i = 0; i < 6; i++)
    {
      if (i < 3)
      {
        first_three[i] = s[i];
      }
      else
      {
        last_three[i - 3] = s[i];
      }
    }

    for (int i = 0; i < 3; i++)
    {
      int num = first_three[i] - 48;
      sum_of_first_three = sum_of_first_three + num;
    }

    for (int i = 0; i < 3; i++)
    {
      int num = last_three[i] - 48;
      sum_of_last_three = sum_of_last_three + num;
    }

    if (sum_of_first_three == sum_of_last_three)
    {
      cout << "YES";
    }
    else
    {
      cout << "NO";
    }

    cout << endl;
  }

  return 0;
}