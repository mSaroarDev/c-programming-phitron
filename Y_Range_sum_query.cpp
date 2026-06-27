#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, q;
  cin >> n >> q;  

  vector<int> v(4);
  for (int i = 0; i < n; i++)   
  {
    cin >> v[i];
  }

  for (int i = 0; i < q; i++)   // o(q*n)
  {
    int left, right;
    cin >> left >> right;      

    int sum = 0;
    for (int i = left - 1; i < right; i++)   
    {
      sum = sum + v[i];
    }

    cout << sum << endl;
  }

  return 0;
}