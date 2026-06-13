#include <bits/stdc++.h>
using namespace std;
int main()
{
  string sentence;
  getline(cin, sentence);

  stringstream ss(sentence);

  string word;

  bool is_yes_printed = false;

  while (ss >> word)
  {
    if (word == "Jessica" && is_yes_printed == false)
    {
      cout << "YES";
      is_yes_printed = true;
    }
  }

  if (is_yes_printed == false)
  {
    cout << "NO";
  }
  return 0;
}