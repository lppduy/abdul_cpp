 
#include <iostream>
using namespace std;

int main () 
{
  string name;
  
  cout<<"May I know your name? ";
  // cin>>name;
  getline(cin,name);

  cout<<"Welcome 🚀 " << name <<endl;

  return 0;
}