#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin >> s;

  vector<int> v(26, 0);
  for(char c:s)
  {
    int idx = c - 97;
    
    v[idx] += 1; 
  }

  for(int i = 0; i<26; i++)
  {
    if(v[i] > 0)
    {
      char ch = i + 97;
      cout << ch << " : " << v[i] << endl;
    }
  }
  return 0;
}