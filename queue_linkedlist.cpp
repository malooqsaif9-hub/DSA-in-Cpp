#include <iostream>
using namespace std;
class node;
node *f = NULL;
node *r = NULL;
class node
{
    int data;
    node *next;

public:
    void traversal(node *ptr)
    {
        while (ptr != NULL)
        {
            cout << ptr->data << "->";
            ptr = ptr->next;
        }
    }

    void enqueue(int x)
    {
        node *n = new node();
        if (n == NULL)
        {
            cout << "queue is full\n";
            return;
        }
        n->data = x;
        n->next = NULL;
        if (f == NULL)
        {
            f = r = n;
        }
        r->next = n;
        r = n;
    }

    int dequeue()
    {
        int val = -1;
        node *ptr = f;
        if (f == NULL)
        {
            cout << "queue is empty";
            return 0;
        }
        else
        {
            f = f->next;
            val = ptr->data;
            delete (ptr);
            cout << val << " is dequeued\n";
            return val;
        }
    }
};

int main()
{
    node n;
    n.enqueue(34);
    n.enqueue(5);
    n.enqueue(3);
    n.enqueue(8);
    n.enqueue(45);

    n.dequeue();
    n.dequeue();
    n.dequeue();

    n.traversal(f);
    return 0;
}