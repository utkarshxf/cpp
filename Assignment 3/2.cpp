// ii. Create two classes which stores distance in feet, inches and meter, cen-
// timeter format respectively.Write a function which compares distance in object
// of these classes and displays the larger one.
#include<iostream>
using namespace std;
class feet
{
private:
  int feet;
public:
  static int distance;
  inputdata(){
  cout << "write distance 
  "
  cin >> feet;
  feet = feet * 30.48 //converting into centimeter
   compares()
  {
    if (distance > feet)
    {
      distance = feet;
    }
  }
} 
class inches
{
private:
  int inches;

public:
  static int distance;
  compares()
  {
    if (distance > inches)
    {
      distance = inches;
    }
  }
} 
class meter
{
private:
  int meter;

public:
  static int distance;
  compares()
  {
    if (distance > meter)
    {
      distance = meter;
    }
  }
} 
class centimeter
{
private:
  int centimeter;

public:
  static int distance;
  compares()
  {
    if (distance > centimeter)
    {
      distance = centimeter;
    }
  }
}
