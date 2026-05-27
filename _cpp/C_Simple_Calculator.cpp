#include<bits/stdc++.h>
using namespace std;
int main()
{

  long long int x, y;
  cin >> x >> y;

  long long int sum = x + y;
  long long int mult = x * y;
  long long int subs = x - y;

  cout << x << " + " << y << " = " << sum << endl;  
  cout << x << " * " << y << " = " << mult << endl;  
  cout << x << " - " << y << " = " << subs << endl;  
  return 0;
}