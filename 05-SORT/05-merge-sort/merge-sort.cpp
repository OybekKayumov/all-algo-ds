#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// merge function
vector<int> merge(vector<int> &left, vector<int> &right) // prinimaet 2 vectora: left i right
{
  // new array: merged
  vector<int> merged;
  int left_index = 0, right_index = 0;

  while (left_index < left.size() && right_index < right.size())
  {
    if (left[left_index] <= right[right_index])
    {
      merged.push_back(left[left_index++]);
    }
    else
    {
      merged.push_back(right[right_index++]);
    }
  }

  while (left_index < left.size())
  {
    merged.push_back(left[left_index++]);
  }

  while (right_index < right.size())
  {
    merged.push_back(right[right_index++]);
  }

  return merged;
}

void merge_sort(vector<int> &arr)
{
  if (arr.size() <= 1)
  {
    return;
  }
  vector<int> left, right; // 2 arrays: left and right
  int n = arr.size() / 2;
  for (int i = 0; i < n; ++i)
    left.push_back(arr[i]);
  for (int i = n; i < arr.size(); ++i)
    right.push_back(arr[i]);

  merge_sort(left);
  merge_sort(right);

  arr = merge(left, right);
}

int main()
{
  vector<int> arr;
  const int n = rand() % 100;
  for (int i = 0; i < n; ++i)
    arr.push_back(rand());
  merge_sort(arr);

  vector<int> arr_copy = arr;
  sort(arr_copy.begin(), arr_copy.end());

  std::cout << (arr_copy == arr);
}