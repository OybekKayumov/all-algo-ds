#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void insertion_sort(vector<int> &arr)
{
  for (int i = 1; i < arr.size(); ++i)
  {
    int cur = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > cur)
    {
      arr[j + 1] = arr[j];
      --j; //--    j = j - 1
    }
    arr[j + 1] = cur;
  }
}

int main()
{
  vector<int> arr;
  const int n = rand() % 100;
  for (int i = 0; i < n; ++i)
    arr.push_back(rand());
  insertion_sort(arr);

  vector<int> arr_copy = arr;
  sort(arr_copy.begin(), arr_copy.end());

  std::cout << (arr_copy == arr);
}