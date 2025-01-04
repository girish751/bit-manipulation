// question 4::postion of set bit is->
#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "enter the value of n" << endl;
  cin >> n;
  int postion = 0;
  while (n != 0)
  {
    if (n & 1 != 0)
    {
      cout << "postion of set bit  is: " << postion << endl;
      postion++;
      n = n >> 1;
    }
    else
    {
      postion++;
      n = n >> 1;
    }
  }
}