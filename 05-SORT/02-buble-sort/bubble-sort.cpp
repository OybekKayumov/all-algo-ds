#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void bubble_sort(vector<int> &arr)
{
  for (int j = 0; j < arr.size(); ++j)
  {
    bool is_sorted = true;
    for (int i = 1; i < arr.size() - j; ++i)
    {
      if (arr[i] < arr[i - 1])
      {
        is_sorted = false;
        swap(arr[i], arr[i - 1]); // menyaem mestami
      }
    }
    if (is_sorted == true)
    {
      return;
    }
  }
}

int main()
{
  vector<int> arr;
  const int n = rand() % 100;
  for (int i = 0; i < n; ++i)
    arr.push_back(rand());
  bubble_sort(arr);

  vector<int> arr_copy = arr;
  sort(arr_copy.begin(), arr_copy.end());

  std::cout << (arr_copy == arr);
}