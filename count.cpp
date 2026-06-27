#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;

  vector<int> v(n);
  for(int i = 0; i < n; i++)
  {
    cin >> v[i];
  }

  int count = 0;
  for(int value:v)
  {
    int target_value = value + 1;
    auto it = find(v.begin(), v.end(), target_value);
    if(it != v.end())
    {
      count++;
    }
  }

  cout << count;
  return 0;
}