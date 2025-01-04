// question 5:: number of bit to be filped to convert A toB;
#include <iostream>
using namespace std;
int main()
{
  int count = 0;
  int A;
  cout << "enter the vaue of A" << endl;
  cin >> A;
  int B;
  cout << "enter the value of B" << endl;
  cin >> B;
  int number = A ^ B;
  while (number != 0)
  {
    if (number & 1 != 0)
    {
      count++;
      number = number >> 1;
    }
    else
    {
      number = number >> 1;
    }
  }
  cout << "number of bit to flip is : " << count << endl;
}