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

void f3_cycle_1() // O(1), c = 4
{
  const int c = 4;
  for (int i = 0; i < c; ++i)
    cout << i;
}

void f4_cycle_n(int n) // O(n)
{
  for (int i = 0; i < n; ++i)
    cout << i;
}

void f5_cycle_nm1(int n, int m) // O(max(n, m) = O(n + m)
{
  for (int i = 0; i < n; ++i)
    cout << i;
  for (int i = 0; i < m; ++i)
    cout << i;
}

void f6_cycle_nm2(int n, int m) // O((n* m)
{
  for (int i = 0; i < n; ++i)
    for (int j = 0; j < m; ++j)
      cout << i + j;
}

void f7_cycle_n2(int n) // O((n*n) = O(n^2)
{
  for (int i = 0; i < n; ++i)
    for (int j = 0; j < n; ++j)
      cout << i + j;
}

void f8_cycle_n3(int n) // O((n*n*n) = O(n^3)
{
  for (int i = 0; i < n; ++i)
    for (int j = 0; j < n; ++j)
      for (int k = 0; k < n; ++k)
        cout << i + j + k;
}

// 2nd cycle starts with j = i
void f9_cycle_ij(int n) // O((n*n) = O(n^2)
{
  for (int i = 0; i < n; ++i)
    for (int j = i; j < n; ++j)
      cout << i + j;
  // 1step, i=0 -> n, 2step, i=1 -> n + (n - 1) ... +1 ==> n*(n+1)/2
  // n*(n+1)/2 = 1/2*(n*n + n)
  // berem ~ max slojnost O(n^2)
}

void f10_cycle_n123(int n) // take max strength O(n^3)
{
  for (int i = 0; i < n; ++i)
    cout << i; // O(n)

  for (int i = 0; i < n; ++i)
    for (int j = 0; j < n; ++j)
      cout << i + j; // O(n^2)

  for (int i = 0; i < n; ++i)
    for (int j = 0; j < n; ++j)
      for (int k = 0; k < n; ++k)
        cout << i + j + k; // O(n^3)
}

// but
void f10_cycle_abc123(int a, int b, int c) // O(a + b^2 + c^3)
{
  for (int i = 0; i < a; ++i) // maybe a = 1 000 000 000
    cout << i;                // O(a)

  for (int i = 0; i < b; ++i) // b == 100
    for (int j = 0; j < b; ++j)
      cout << i + j; // O(b^2)

  for (int i = 0; i < c; ++i) // c = 10
    for (int j = 0; j < c; ++j)
      for (int k = 0; k < c; ++k)
        cout << i + j + k; // O(c^3)
}

int min()
{
}