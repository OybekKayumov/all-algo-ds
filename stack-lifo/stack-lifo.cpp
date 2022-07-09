#include <iostream>
#include <stack>

using namespace std;

bool isOpen(char ch)
{
  // return true if ch == { or ( or [
  return ch == '{' || ch == '(' || ch == '[';
}

bool isPair(char open, char close)
{
  // return true if ch == { or ( or [
  return open == '{' && close == '}' ||
         open == '(' && close == ')' ||
         open == '[' && close == ']';
}

// function
bool isBalanced(string s)
{
  // "()({[]}())"
  // "[(])"    => false
  // if at the and we have "", it means we have balanced
  // "}{"
  stack<char> st;

  for (int i = 0; i < s.size(); ++i)
  {
    if (isOpen(s[i]))
    {
      st.push(s[i]);
    }
    else
    {
      // if our stack is not empty and
      if (!st.empty() && isPair(st.top(), s[i]))
      {
        st.pop();
      }
      else
      {
        return false;
      }
    }
  }
  // return true;
  // if stack is empty, we return true, else stack is not empty we return false
  return st.empty();
}

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
  string s8 = "({[]})";     // true
  string s9 = "(]}";        // false
  string s10 = "(";         // false
  string s11 = "]";         // false
  string s12 = "}";         // false
  string s13 = "()";        // true
  string s14 = "[]";        // true

  cout << isBalanced(s1) << endl;  // 1
  cout << isBalanced(s2) << endl;  // 1
  cout << isBalanced(s3) << endl;  // 0
  cout << isBalanced(s4) << endl;  // 1
  cout << isBalanced(s5) << endl;  // 0
  cout << isBalanced(s6) << endl;  // 0
  cout << isBalanced(s7) << endl;  // 0
  cout << isBalanced(s8) << endl;  // 1
  cout << isBalanced(s9) << endl;  // 0
  cout << isBalanced(s10) << endl; // 0
  cout << isBalanced(s11) << endl; // 0
  cout << isBalanced(s12) << endl; // 0
  cout << isBalanced(s13) << endl; // 1
  cout << isBalanced(s14) << endl; // 1
}