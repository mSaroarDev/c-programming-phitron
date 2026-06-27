#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;

  vector<int> v1(n);
  vector<int> v2;
  for (int i = 0; i < n; i++)
  {
    cin >> v1[i];
  }

  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    v2.push_back(x);
  }

  v2.insert(v2.begin() + n, v1.begin(), v1.end());
  
  for (int i = 0; i < (n*2); i++)
  {
    cout << v2[i] << " ";
  }

  return 0;
}