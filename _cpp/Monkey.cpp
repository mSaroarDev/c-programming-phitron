#include <bits/stdc++.h>
using namespace std;
int main()
{
  char str[100001];
  while (cin.getline(str, 100001))
  {
    string word = str;
    sort(word.begin(), word.end());

    for (int i = 0; i < word.size(); i++)
    {
      if (word[i] != ' ')
      {
        cout << word[i] << "";
      }
    }

    cout << endl;
  }
  cin.ignore();

  return 0;
}