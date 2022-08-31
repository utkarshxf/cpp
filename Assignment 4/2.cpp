#include <iostream>
using namespace std;
float volume(float r){
  return(4/3)*3.14*r*r*r;
}
float volume (float r,float h){
  return 3.14*r*r*h;
}
int volume(int a){
  return a*a*a;
}

int main(){
  int a;
  float r,r2,h;
  cout<<"Radius of sphare: ";
  cin>> r;
  cout<<"Side of cuboid: ";
  cin>>a;

  cout<<"\n Volume of sphere: " << volume(r);
}


