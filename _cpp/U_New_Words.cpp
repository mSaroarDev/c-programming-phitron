#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin >> s;

  int e = 0;
  int g = 0; 
  int y = 0;
  int p = 0;
  int t = 0;

  for(char c:s)
  {
    if(c == 'e' || c == 'E')
    {
      e++;
    }

    if(c == 'g' || c == 'G')
    {
      g++;
    }

    if(c == 'y' || c == 'Y')
    {
      y++;
    }

    if(c == 'p' || c == 'P')
    {
      p++;
    }

    if(c == 't' || c == 'T')
    {
      t++;
    }
  }

  int mn = min({e, g, y, p, t});

  cout << mn;
  return 0;
}