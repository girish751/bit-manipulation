// question::2 find the two non-repeatin element in an array of repeatin element
#include <iostream>
using namespace std;
int main()
{
  int arr[6] = {2, 1, 2, 3, 5, 1};
  int ans = 0;
  for (int i = 0; i < 6; i++)
  {
    ans = ans ^ arr[i];
  }
  int x = 0;
  int y = 0;
  cout << ans << endl;
  int right_bit = (ans & (~(ans - 1)));
  for (int i = 0; i < 6; i++)
  {
    if (arr[i] & right_bit)
    {
      x = x ^ arr[i];
    }
    else
    {
      y = y ^ arr[i];
    }
  }
  cout << x << endl;
  cout << y << endl;
}