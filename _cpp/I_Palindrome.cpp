#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin >> s;

  string tmp;
  tmp = s;

  reverse(tmp.begin(), tmp.end());

  if(tmp == s)
  {
    cout << "YES";
  }
  else 
  {
    cout << "NO";
  }
  return 0;
}