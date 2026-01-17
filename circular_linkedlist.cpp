#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

void traversal(node *head)
{
    node *ptr = head;
    do
    {
        cout << ptr->data << "->";
        ptr = ptr->next;

    } while (ptr != head);
   
}
node* insertionatfirst(node*head,int data){
    node*ptr=new node();
    ptr->data=data;
    node*p=head->next;
    while (p->next!=head)
    {
      p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head=ptr;
    return head;
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
    fourth->next = head;
    head = insertionatfirst(head,34);
    traversal(head);
    return 0;
}