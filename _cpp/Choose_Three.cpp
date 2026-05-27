#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;

  for (int l = 0; l < t; l++)
  {

    int n, sum;
    cin >> n >> sum;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }

    bool is_yes_printed = false;

    int i = 0, j = i + 1, k = j + 1;

    for (int i = 0; i < n - 2; i++)
    {
      for (int j = i + 1; j < n - 1; j++)
      {
        for (int k = j + 1; k < n; k++)
        {
          if (arr[i] + arr[j] + arr[k] == sum)
          {
            if (is_yes_printed != true)
            {
              cout << "YES";
            }
            is_yes_printed = true;
          }
        }
      }
    }

    if (is_yes_printed != true)
    {
      cout << "NO";
    }
    cout << endl;
  }
  return 0;
}