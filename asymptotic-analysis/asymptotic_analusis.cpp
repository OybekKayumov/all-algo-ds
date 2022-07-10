#include <iostream>
#include <vector>

using namespace std;

int f1_search(vector<int> a, int x) // O(n) = c*n, here n is length of array
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
// void - nichego ne vozvrashaet
// peredavat po ssilke, chtoby pomenyalis na meste
// pomenyat mestami a i b,
// vsegda rabotaet za odno i toje vremya
// O(1) = c, c - constanta
void f2_swap(int &a, int &b)
{
  int t = a;
  a = b;
  b = t;
}

int min()
{
}