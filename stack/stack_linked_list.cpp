#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *top = NULL; // also known as head;

void push(int x)
{
    Node *temp = new Node();
    temp->next = top;
    temp->data = x;
    top = temp;
}
void pop()
{
    Node *temp;
    if (top == NULL)
        return;
    temp = top;
    top = top->next;
    free(temp);
}
void Print()
{

    Node *temp = top;
    cout << "List is: ";
    while (temp != NULL)
    {
        cout << temp->data << ' ';
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    push(1);
    push(2);
    push(3);
    pop();
    pop();
    push(100);
    push(1000);
    pop();
    Print(); // 100->1
    return 0;
}