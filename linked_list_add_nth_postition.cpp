#include <iostream>
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

int main()
{
    head = NULL;
    insert(2, 1);
    insert(3, 2);
    insert(4, 1);
    insert(50, 2);
    // final list will be-> 4, 5, 2, 3
    Print();
}