#include <iostream>
using namespace std;
struct employee
{
  string name;
  int id;
  int age;
  int bsal;
  float gsal;
  void record(int i)
  {
    cout << "Enter the Name for employee " << i + 1 << " : ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter the ID : ";
    cin >> id;
    cout << "Enter the age : ";
    cin >> age;
    cout << "Enter the basic salary : ";
    cin >> bsal;
    gsal = bsal + (0.8 * bsal) + (0.1 * bsal);
  }
  void display(int i)
  {
    cout << i + 1 << ". Name = " << name << "\t";
    cout << "ID = " << id << "\t";
    cout << "Age = " << age << "\t";
    cout << "Basic salary = " << bsal << "\t";
    cout << "Gross salary = " << gsal << endl;
  }
};
int main()
{
  int n;
  cout << "Enter the number of employees : ";
  cin >> n;
  employee *e = new employee[n];
  for (int i = 0; i < n; i++)
    (e + i)->record(i);
  cout << "\nEmployee(s) Details :-\n"
       << endl;
  for (int i = 0; i < n; i++)
    (e + i)->display(i);
  return 0;
}