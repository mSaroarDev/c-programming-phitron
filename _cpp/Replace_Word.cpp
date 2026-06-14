#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;

  for (int i = 0; i < t; i++)
  {
    string main_text, replace_with;

    cin >> main_text >> replace_with;

    int size = replace_with.size();
    int idx = main_text.find(replace_with);

    while (idx != -1)
    {
      main_text.replace(idx, size, "#");

      idx = main_text.find(replace_with);
      // cout << idx;
    }

    cout << main_text << endl;
  } 

  return 0;
}