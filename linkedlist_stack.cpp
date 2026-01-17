#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
node *top = NULL;

void traversal(node *ptr)
{
    while (ptr != NULL)
    {
        cout << "element:" << ptr->data << " ";
        ptr = ptr->next;
        cout << endl;
    }
}

int issmpty(node *top)
{
    if (top == NULL)
    {

        return 1;
    }
    return 0;
}

int isfull(node *top)
{
    node *n = new node();
    if (n == NULL)
    {

        return -1;
    }
    else
    {

        return 1;
    }
}
node *push(node *top, int data)
{
    if (isfull(top) == -1)
    {
        cout << "stack overflow" << endl;
    }

    node *p = new node();
    p->data = data;
    p->next = top;
    top = p;
    return top;
}
int pop(node *tp)
{
    if (issmpty(top))
    {
        cout << "stack underflow" << endl;
    }

    node *n = tp;
    top = tp->next;
    int x = n->data;
    delete (n);
    return x;
}
int main()
{

    top = push(top, 4);
    top = push(top, 6);
    top = push(top, 8);
    int element = pop(top);
    cout << "popped element is " << element << endl;
    traversal(top);
    

    return 0;
}