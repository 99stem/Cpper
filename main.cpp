#include <iostream>

using namespace std;

int main()
{
  
  string name;
  cout << "Hello, What's your name?" << endl;
  cin >> name;
  cout << "Hello, " << name << endl;
  
    if(name == "99stem")
    {
      cout << "You are the owner :O" << endl;
    }
    else
    {
      cout << "You are not the owner :P" << endl;
    }
  return 0;
}
