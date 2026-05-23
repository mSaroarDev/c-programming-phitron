#include <bits/stdc++.h>
using namespace std;
int main()
{
  char x;
  cin >> x;

  int character = x;

  if (character >= 48 && character <= 57)
  {
    cout << "IS DIGIT";
  }
  else if (character >= 65 && character <= 90)
  {
    cout << "ALPHA" << endl << "IS CAPITAL";
  }
  else if (character >= 97 && character <= 122)
  {
    cout << "ALPHA" << endl << "IS SMALL";
  }
  return 0;
}