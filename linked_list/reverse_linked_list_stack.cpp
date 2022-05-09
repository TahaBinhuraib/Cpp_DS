#include <iostream>
#include <stack>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

// pointer to head
Node *head;

Node *find_prev_node(int position)
{
    Node *tmp = head;
    for (int i = 0; i < position - 2; i++)
    {
        tmp = tmp->next;
    }
    return tmp;
}
void Delete(int n)
{
    Node *temp1 = head;
    if (n == 1)
    {
        head = temp1->next;
        return;
    }
    Node *temp_prev = find_prev_node(n);
    Node *temp_next = temp_prev->next; // This is the node we would like to delete
    temp_prev->next = temp_next->next;
    delete (temp_next);
}
void insert(int data, int position)
{
    Node *temp1 = new Node();
    temp1->data = data;
    temp1->next = NULL;

    if (position == 1)
    {
        temp1->next = head;
        head = temp1;
        return;
    }
    Node *temp2 = find_prev_node(position);
    temp1->next = temp2->next;
    temp2->next = temp1;
}

void Print()
{
    Node *temp = head;
    cout << "List is: ";
    while (temp != NULL)
    {
        cout << temp->data << ' ';
        temp = temp->next;
    }
    cout << endl;
}

stack<Node *> reverse()
{
    Node *temp = head;
    stack<Node *> S;
    while (temp != NULL)
    {
        S.push(temp);
        temp = temp->next;
    }
    return S;
}

int main()
{
    head = NULL;
    insert(2, 1);
    insert(3, 2);
    insert(4, 1);
    insert(5, 2);
    Print();
    // list will be-> 4, 5, 2, 3
    Delete(2);
    Print();
    // list will be-> 4, 2, 3
    // reversal
    stack<Node *> S = reverse();
    Node *temp = S.top();
    head = temp;
    S.pop();
    while (!S.empty())
    {
        temp->next = S.top();
        S.pop();
        temp = temp->next;
    }
    temp->next = NULL;
    Print();
}