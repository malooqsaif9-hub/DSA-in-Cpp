#include <iostream>
using namespace std;

#define SIZE 5

class queue
{
    int front, rear;
    int arr[SIZE];

public:
    queue()
    {
        front = rear = -1;
    }
    void enqueue(int x)
    {
        if (rear == SIZE - 1)
        {
            cout << "queue is full\n";
        }
        else if (front == -1)
        {
            front = 0;
        }

        arr[++rear] = x;
        cout << x << " inserted\n";
    }


    int dequeue(){
        if (front == -1||front>rear)
        {
            cout<<"queue is underflow\n";
        }
        else{
           cout<< arr[front++] <<" deleted\n";
        }

    }
    void display()
    {
        if (front == -1)
        {
            cout << "queue is empty\n";
        }
        else
        {
            for (int i = front; i <= rear; i++)
            {
                cout << arr[i]<<" ";
                
            }
        }
    }
};

int main()
{
    queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.display();
}
