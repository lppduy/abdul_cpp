#include <iostream>
using namespace std;

int main () 
{
  
  int roll;

  cout<<"Enter your Roll number";
  cin>>roll;

  if(roll<1)
  {
    cout<<"Invalid";
  }
  else
  {
    cout<<"Valid";
  }

  return 0;
}