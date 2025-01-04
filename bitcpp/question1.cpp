// question 1:: count set bit in an integer
#include <iostream>
using namespace std;
int count_set_bit(int n, int count)
{
  while (n != 0)
  {
    if ((n & 1) != 0)
    {
      count++;
      n = n >> 1;
    }
    else
    {
      n = n >> 1;
    }
  }
  return count;
}
int main()
{
  int n;
  cout << "enter the value of n" << endl;
  cin >> n;
  int count = 0;
  int ans = count_set_bit(n, count);
  cout << "number of set bit is: " << ans << endl;
}