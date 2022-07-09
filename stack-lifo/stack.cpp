#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isOpen(char ch)
{
    return ch == '{' || ch == '(' || ch == '[';
}

bool isPair(char open, char close)
{
    return open == '{' && close == '}' ||
           open == '(' && close == ')' ||
           open == '[' && close == ']';
}

bool isBalanced(string s)
{
    stack<char> st;
    for (int i = 0; i < s.size(); ++i)
    {
        if (isOpen(s[i]))
        {
            st.push(s[i]);
        }
        else
        {
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

    // (){}[]
    string s1 = "()({[]}())";       // true
    string s2 = "{}";               // true
    string s3 = "}{";               // false
    string s4 = "";                 // true
    string s5 = "(()";              // false
    string s6 = "())";              // false
    string s7 = "[(])";             // false
    cout << isBalanced(s1) << endl; // 1
    cout << isBalanced(s2) << endl; // 1
    cout << isBalanced(s3) << endl; // 0
    cout << isBalanced(s4) << endl; // 1
    cout << isBalanced(s5) << endl; // 0
    cout << isBalanced(s6) << endl; // 0
    cout << isBalanced(s7) << endl; // 0
}