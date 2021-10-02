// Check the expression has valid or Balanced Paranthesis
#include <bits/stdc++.h>
using namespace std;

bool is_balanced(string exp)
{
    stack<char> s;
    char x;

    for (int i = 0; i < exp.length(); i++)
    {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
        {
            s.push(exp[i]);
            continue;
        }

        if (s.empty())
            return false;

        switch (exp[i])
        {
        case ')':
            x = s.top();
            s.pop();
            if (x == '{' || x == '[')
                return false;
            break;
        case '}':
            x = s.top();
            s.pop();
            if (x == '(' || x == '[')
                return false;
            break;
        case ']':
            x = s.top();
            s.pop();
            if (x == '(' || x == '{')
                return false;
            break;
        default:
            break;
        }
    }
    return (s.empty());
}

int main()
{
    string str;
    cout << "Enter the expression: ";
    cin >> str;
    if (is_balanced(str))
        cout << "\nBALANCED";
    else
        cout << "\nNOT BALANCED";
}
