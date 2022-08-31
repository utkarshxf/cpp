#include <iostream>
using namespace std;
int main(){
  int a[9]={1,2,6,11,12,22,23,32,54};
  int s=0;
  int l=9;
  int c;
  cout << "number wnt to find";
  cin>>c;
  while (s<=l)
  {
    int mid = (l + s)/2;
    if (a[mid] == c)
    {
      cout << "we get numb at" << mid;
      return 0;
    }
    else if (a[mid] > c)
    {
      l= mid - 1;
    }
    else
    {
      s= mid + 1;
    }
  }
  cout<<"we cant find your number";
  return 0;
} 

  
  
  
  
