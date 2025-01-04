// question 6:: total number of set bit form 1 to n-->
#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int count = 0;
  for (int i = 1; i <= n; i++)
  {
    int x = i;
    while (x != 0)
    {
      if (x & 1 != 0)
      {
        count++;
        x = x >> 1;
      }
      else
      {
        x = x >> 1;
      }
    }
  }
  cout << "number of set bit form 1 to n is " << count << endl;
}