#include <iostream>
using namespace std;
class Queue
{
public:
    int *arr;
    int rear;
    int front;
    unsigned count;
    int size;
    Queue(int size)
    {
        arr = new int[size];
        this->front = 0;
        this->rear = -1;
        this->count = 0;
        this->size = size;
    }

    ~Queue()
    {
        delete[] arr;
    }

    bool is_full()
    {
        return (this->count == this->size);
    }

    bool is_empty()
    {
        return (this->count == 0);
    }

    void dequeue()
    {
        if (is_empty())
        {
            cout << "underflow" << endl;
        }
        else
        {
            cout << "Removing element: " << arr[front] << endl;
            this->count = this->count - 1;
            this->front = this->front + 1;
        }
    }

    void enqueue(int element)
    {
        if (is_full())
        {
            cout << "Overflow" << endl;
        }
        else
        {
            cout << "Inserting element: " << element << endl;
            this->rear = this->rear + 1;
            arr[this->rear] = element;
            this->count = this->count + 1;
        }
    }

    void peek()
    {
        if (is_empty())
        {
            cout << "Underflow!" << endl;
        }
        else
        {
            cout << "front element is: " << arr[this->front] << endl;
        }
    }

    void print_size()
    {
        cout << "Size of queue is: " << this->size << endl;
    }
};

int main()
{
    Queue q(7);
    q.print_size();
    q.enqueue(1);
    q.enqueue(5);
    q.enqueue(3);

    q.dequeue();
    q.peek();
    q.dequeue();
    q.peek();
    q.enqueue(55);
    q.peek(); // should print 3
    q.dequeue();
    q.peek(); // should print 55
    return 0;
}