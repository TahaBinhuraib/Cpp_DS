#include <iostream>
#include <stack>
using namespace std;
bool is_balanced(string expression)
{
    stack<char> C;
    char x;
    for (int i = 0; i < expression.size(); i++)
    {
        if (expression[i] == '(' || expression[i] == '[' || expression[i] == '{')
        {
            C.push(expression[i]);
            continue;
        }
        if (C.empty())
        {
            return false;
        }
        switch (expression[i])
        {
        case ')':
            x = C.top();
            C.pop();
            if (x == '{' || x == '[')
            {
                return false;
            }
            break;
        case ']':
            x = C.top();
            C.pop();
            if (x == '(' || x == '{')
            {
                return false;
            }
            break;
        case '}':
            x = C.top();
            C.pop();
            if (x == '(' || x == '[')
            {
                return false;
            }
            break;
        }
    }
    return (C.empty());
}

int main()
{
    // (A+B) -> balanced
    // (A+{b*2} -> unbalanced
    // The compiler must check for this
    string expresion = "([]{})";
    if (is_balanced(expresion))
        cout << "Balanced!" << endl;
    else
        cout << "Unbalanced!" << endl;
}