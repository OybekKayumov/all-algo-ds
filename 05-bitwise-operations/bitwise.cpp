#include <iostream>

using namespace std;

int main()
{
  cout << (51 & 25) << endl; // 17
  cout << (51 | 25) << endl; // 59
  cout << (51 ^ 25) << endl; // 42
  cout << (~23) << endl;     // -24
  cout << (~23u) << endl;    // 4294967272

  cout << endl;
  cout << 12 << 2 << endl;   // 12 2
  cout << (12 << 2) << endl; // 48
  cout << (12 >> 2) << endl; // 3

  cout << (1 << 4) << endl; // 16
  cout << (1 << 5) << endl; // 32
  cout << (1 << 6) << endl; // 64
  cout << (1 << 7) << endl; // 128

  int n = 17; // 0...000010001
  int i = 2;
  n = n | (1 << i);
  cout << n << endl; // 21
  n = n | (1 << i);
  cout << n << endl; // 21
  n = n & ~(1 << i);
  cout << n << endl; // 17

  n = n ^ (1 << i);
  cout << n << endl; // 21

  // if (n & (1 << i))
}