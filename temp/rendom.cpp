#include <iostream>
#include <stdlib.h>

using namespace std;

void display(int *ptr, int n)
{

  for (int i = 0; i < n; i++)
  {
    cout << "\n"
         << (*(ptr + i));
  }
}

void insert(int *ptr, int n, int num, int pos)
{
  int i;
  for (i = n - 1; i > 0; i--)
  {
    *(ptr + i) = *(ptr + i - 1);
    *(ptr + pos) = num;
  }
}

void delete (int *ptr, int n, int pos)
{
  int i;
  for (i = pos; i < n; i++)
  {
    *(ptr + i) = *(ptr + i + 1);
  }
}

int main()
{
  int *ptr;
  int n, i, q, pos, num;
  cout << "\nenter the size of array";
  cin >> n;
  ptr = (int *)malloc(n * sizeof(int));
  cout << "\nContent of ptr is" << ptr;
  cout << "\nenter elements in dynamic array";
  for (i = 0; i < n; i++)
  {
    cout << "\nenter" << (i + 1) << "element";
    cin >> *(ptr + i);
  }

  cout << "enter 1 for display of array";
  cout << "enter 2 for insertion of elelment ";
  cout << "enter 3 for  deletion of element ";
  cin >> q;
  switch (q)
  {

  case 1:
  {
    cout << "\ndisplay elements in the dynamic array";
    display(ptr, n);
    break;
  }
  case 2:
  {
    cout << "enter element to be inserted";
    cin >> num;
    cout << "position at which u want the element to be entered";
    cin >> pos;
    insert(ptr, n, num, pos);
    cout << "\ndisplaying  elements in new dynamic array";
    display(ptr, n);
    break;
  }
  case 3:
  {

    cout << "enter element to be deleted";
    cin >> num;

    delete (ptr, n, num);
    cout << "\ndisplaying  elements in new dynamic array";
    display(ptr, n);
    break;
  }
  }

  return 0;
}