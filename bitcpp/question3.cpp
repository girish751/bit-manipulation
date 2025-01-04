// program to find whether a no is power of two
#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "enter the value of n" << endl;
  cin >> n;
  int count = 0;
  while (n != 0)
  {
    if (n & 1 != 0)
    {
      count++;
      n = n >> 1;
    }
    else
    {
      n = n >> 1;
    }
  }
  if (count == 1)
  {
    cout << "number is power of two" << endl;
  }
  else
  {
    cout << "number is not power of two" << endl;
  }
}