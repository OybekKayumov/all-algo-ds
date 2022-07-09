#include <iostream>
#include <stack>

using namespace std;

int main()
{
  stack<int> st;
  st.push(2);
  st.push(7);
  cout << st.top(); // 7
  st.pop();
  st.push(3);
  st.push(4);
  cout << st.top(); // 4
  st.pop();
  cout << st.top(); // 3
  st.pop();
}