#include <iostream>
using namespace std;

class student
{
private:
  char name[30];
  int rollNo;
  int total;

public:
  void getDetails(void);
  void putDetails(void);
};

void student::getDetails(void)
{
  cout << "Enter name: ";
  cin >> name;
  cout << "Enter roll number: ";
  cin >> rollNo;
  cout << "Enter total marks outof 500: ";
  cin >> total;
}

void student::putDetails(void)
{
  cout << "Student details:\n";
  cout << "Name:" << name << ",Roll Number:" << rollNo << ",Total:" << total;
}

int main()
{
  student std[100];
  int n, loop;

  cout << "Enter total number of students: ";
  cin >> n;

  for (loop = 0; loop < n; loop++)
  {
    cout << "Enter details of student " << loop + 1 << ":\n";
    std[loop].getDetails();
  }

  cout << endl;

  for (loop = 0; loop < n; loop++)
  {
    cout << "Details of student " << (loop + 1) << ":\n";
    std[loop].putDetails();
  }

  return 0;
}