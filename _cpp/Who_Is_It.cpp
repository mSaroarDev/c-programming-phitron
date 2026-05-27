#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
  int roll;
  string name;
  char section;
  int num;

  Student(int roll, string name, char section, int num)
  {
    this->roll = roll;
    this->name = name;
    this->section = section;
    this->num = num;
  }
};

int main()
{
  int t;
  cin >> t;

  for (int i = 0; i < t; i++)
  {
    int roll;
    string name;
    char section;
    int num;

    cin >> roll >> name >> section >> num;
    Student st_one(roll, name, section, num);

    cin >> roll >> name >> section >> num;
    Student st_two(roll, name, section, num);

    cin >> roll >> name >> section >> num;
    Student st_three(roll, name, section, num);

    int max_num = max({st_one.num, st_two.num, st_three.num});

    if (max_num == st_one.num)
    {
      cout << st_one.roll << " " << st_one.name << " " << st_one.section << " " << st_one.num << endl;
    }
    else if (max_num == st_two.num)
    {
      cout << st_two.roll << " " << st_two.name << " " << st_two.section << " " << st_two.num << endl;
    }
    else if (max_num == st_three.num)
    {
      cout << st_three.roll << " " << st_three.name << " " << st_three.section << " " << st_three.num << endl;
    }
  }

  return 0;
}