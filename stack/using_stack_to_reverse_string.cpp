#include <iostream>
#include <string>
#include <stack>
using namespace std;

// Code mostly taken from Mycode school youtube channel. I just made it more "c++"
// We push each character to the stack then pop each element. Following LIFO, this
// should achieve the intended goal
void reverse(char *c, int n)
{
    stack<char> S;
    for (int i = 0; i < n; i++)
    {
        S.push(c[i]);
    }
    for (int i = 0; i < n; i++)
    {
        c[i] = S.top();
        S.pop();
    }
}

int main()
{
    char c[50];
    cout << "Enter a string: " << endl;
    cin.getline(c, sizeof(c));
    cout << "Original string: " << c << endl;
    reverse(c, strlen(c));
    // now print the array:
    cout << "reversed" << endl;
    for (int i = 0; i <= strlen(c); i++)
    {
        cout << c[i] << " ";
    }
    cout << endl;
    return 0;
}