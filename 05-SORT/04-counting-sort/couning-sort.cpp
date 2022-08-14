#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void counting_sort(vector<int> &arr)
{
  int minimum = arr[0];
  int maximum = arr[0];
  for (int i = 0; i < arr.size(); ++i)
  {
    if (arr[i] > maximum)
      maximum = arr[i];
    if (arr[i] < minimum)
      minimum = arr[i];
  }
  vector<int> bucket(maximum - minimum + 1);
  for (int i = 0; i < arr.size(); ++i)
  {
    bucket[arr[i] - minimum]++;
  }
  arr.clear();
  for (int i = 0; i < bucket.size(); ++i)
  {
    int count = bucket[i]; // i + minimum
    for (int j = 0; j < count; ++j)
    {
      arr.push_back(i + minimum);
    }
  }
}

int main()
{
  vector<int> arr;
  const int n = rand() % 100;
  for (int i = 0; i < n; ++i)
    arr.push_back(rand());
  counting_sort(arr);

  vector<int> arr_copy = arr;
  sort(arr_copy.begin(), arr_copy.end());

  std::cout << (arr_copy == arr);
}