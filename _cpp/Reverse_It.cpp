#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
  string name;
  int cls;
  char sec;
  int st_id;
};

int main()
{
  int test_cases;
  cin >> test_cases;

  Student a[test_cases];

  for (int i = 0; i < test_cases; i++)
  {
    cin >> a[i].name >> a[i].cls >> a[i].sec >> a[i].st_id;
  }

  for (int i = 0, j = test_cases - 1; i < j; i++, j--)
  {
    char tmp = a[i].sec;
    a[i].sec = a[j].sec;
    a[j].sec = tmp;
  }

  for (int i = 0; i < test_cases; i++)
  {
    cout << a[i].name << " " << a[i].cls << " " << a[i].sec << " " << a[i].st_id << endl;
  }
  return 0;
}