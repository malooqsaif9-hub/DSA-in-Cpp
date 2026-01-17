#include <iostream>
using namespace std;
#define SIZE 5

class circularqueue
{
    int front, rear;
    int arr[SIZE];

public:
    circularqueue()
    {
        rear = front = 0;
    }

    void enqueue(int x)
    {
        if ((rear + 1) % SIZE == front)
        {
            cout << "queue overflow\n";
            return;
        }
        rear = (rear + 1) % SIZE;
        arr[rear] = x;
        cout << x << " inserted\n";
    }

    void dequeue()
    {
        if (front == rear)
        {
            cout << "queue underflow\n";
            return;
        }
        front = (front + 1) % SIZE;
        cout << arr[front] << " deleted\n";
    }

    void display()
    {
        if (front == rear)
        {
            cout << "queue is empty\n";
            return;
        }
        else
        {
            int i = (front + 1) % SIZE;
            while (i != (rear + 1) % SIZE)
            {
                cout << arr[i] << " ";
                i = (i + 1) % SIZE;
            }
        }
    }
};

int main()
{
    circularqueue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);

    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    // q.dequeue();

    q.display();
    return 0;
}