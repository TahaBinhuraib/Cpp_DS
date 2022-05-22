#include <iostream>
using namespace std;

struct Node
{
    int data;

    Node *next;
};

class LinkedList
{
public:
    Node *front;
    Node *rear;
    int count;

    LinkedList()
    {
        this->front = NULL;
        this->rear = NULL;
        this->count = 0;
    }
    bool isempty()
    {
        if (this->front == NULL && this->rear == NULL)
            return true;
        else
            return false;
    }
    void enqueue(int value)
    {
        Node *ptr = new Node();
        ptr->data = value;
        ptr->next = NULL;

        if (this->front == NULL)
        {
            this->front = ptr;
            this->rear = ptr;
        }
        else
        {
            this->rear->next = ptr;
            this->rear = ptr;
        }
        this->count = this->count + 1;
    }

    void dequeue()
    {
        if (isempty())
        {
            cout << "Queue is empty!" << endl;
        }
        else
        {
            if (this->front == this->rear)
            {
                free(this->front);
                this->front = this->rear = NULL;
            }
            else
            {
                Node *ptr = this->front;
                this->front = this->front->next;
                free(ptr);
            }
        }
        this->count = this->count - 1;
    }

    void peek()
    {
        if (isempty())
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            cout << "front element is: " << this->front->data << endl;
        }
    }

    void show_end()
    {
        if (isempty())
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            cout << "end element is: " << this->rear->data << endl;
        }
    }
};
int main()
{
    LinkedList linkedlist;
    linkedlist.enqueue(2);
    cout << "linked list count is: " << linkedlist.count << endl;
    linkedlist.enqueue(3);
    linkedlist.enqueue(5);
    linkedlist.dequeue();
    linkedlist.peek();                                            // should print 3
    linkedlist.show_end();                                        // should be 5
    cout << "linked list count is: " << linkedlist.count << endl; // should be 3

    return 0;
}