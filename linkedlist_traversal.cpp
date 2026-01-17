#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

void traversal(node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << "->";
        ptr = ptr->next;
    }
    cout << "NULL";
}

int main()
{
    // creating nodes
    node *head;
    node *second;
    node *third;
    node *fourth;

    // allocating memory in heap
    head = new node();
    second = new node();
    third = new node();
    fourth = new node();

    // assing data and linking
    head->data = 4;
    head->next = second;

    second->data = 7;
    second->next = third;

    third->data = 9;
    third->next = fourth;

    fourth->data = 28;
    fourth->next = NULL;

    traversal(head);
    return 0;
}