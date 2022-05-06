#include <iostream>
using namespace std;
#define MAX 100
int Array[MAX];
int top = -1;

void Push(int x)
{
    if (top == MAX - 1)
    {
        cout << "Error: overflow" << endl;
        return;
    }
    top++;
    Array[top] = x;
}

void Pop()
{
    if (top != -1)
    {
        top--;
    }
}
int isfull()
{
    if (top == MAX - 1)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
void Print()
{
    for (int i = 0; i <= top; i++)
    {
        if (i == 0)
        {
            cout << Array[i];
        }
        else
        {
            cout << "->" << Array[i];
        }
    }
    cout << endl;
}
int main()
{
    Push(1);
    Push(2);
    Push(3);
    Pop();
    Push(100);
    Print(); // should print 1, 2, 100
    return 0;
}