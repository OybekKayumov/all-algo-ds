#include <iostream>
#include <vector>

using namespace std;

int f1(vector<int> a, int x) // O(n), here n is length of array
{
  for (int i = 0; i < a.size(); ++i)
  {
    if (a[i] == x)
    {
      return i;
    }
  }

  return -1;
}

int min()
{
}