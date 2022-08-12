#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void selection_sort(vector<int> &arr)
{
  for (int j = 0; j < arr.size(); ++j)
  {
    int min_ind = j;
    for (int i = j + 1; i < arr.size(); ++i)
    {
      if (arr[min_ind] > arr[i])
      {
        min_ind = i;
      }
    }
    swap(arr[j], arr[min_ind]);
  }
}

int main()
{
  vector<int> arr;
  const int n = rand() % 100;
  for (int i = 0; i < n; ++i)
    arr.push_back(rand());

  vector<int> arr_copy = arr;

  selection_sort(arr);
  sort(arr_copy.begin(), arr_copy.end());

  std::cout << (arr_copy == arr);
}