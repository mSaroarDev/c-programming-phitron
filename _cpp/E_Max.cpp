#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;

  int arr[n];

  int mx_num = 0;

  for(int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  for(int i = 0; i < n; i++)
  {
    mx_num =  max(arr[i], mx_num);
  }

  cout << mx_num;
  return 0;
}