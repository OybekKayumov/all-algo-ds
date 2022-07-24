#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> arr{1, 2, 3, 4};
  int n = arr.size();
  for (int mask = 0; mask < (1 << n); ++mask)
  {
    bool first = true;
    cout << "{";
    for (int i = 0; i < n; ++i)
    {
      if (mask & (1 << i))
      {
        if (!first)
          cout << ", ";
        first = false;
        cout << arr[i];
      }
    }
    cout << "}";
    cout << endl;
  }
}

// {}
// {1}
// {2}
// {1, 2}
// {3}
// {1, 3}
// {2, 3}
// {1, 2, 3}
// {4}
// {1, 4}
// {2, 4}
// {1, 2, 4}
// {3, 4}
// {1, 3, 4}
// {2, 3, 4}
// {1, 2, 3, 4}