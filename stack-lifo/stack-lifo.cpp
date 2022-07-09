#include <iostream>
#include <stack>

using namespace std;

int main()
{
  // stack<int> st;
  // st.push(2);
  // st.push(7);
  // cout << st.top(); // 7
  // st.pop();
  // st.push(3);
  // st.push(4);
  // cout << st.top(); // 4
  // st.pop();
  // cout << st.top(); // 3
  // st.pop();

  //(){}[], balanced or not
  string s1 = "()({[]}())"; // true
  string s2 = "{}";         // true
  string s3 = "}{";         // false
  string s4 = "";           // true
  string s5 = "(()";        // false
  string s6 = "())";        // false
  string s7 = "[(])";       // false
}