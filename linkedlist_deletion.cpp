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
node *deletionatfirst(node *head)
{
    node*ptr=head;
    head=head->next;
    delete(ptr);
    return head;
}
node* deletionatindex(node*head,int index){
    node*p=head;
    node*q=head->next;
    for (int i = 0; i < index-1; i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    delete(q);
    return head;
}

node* deletionatend(node* head){
    node* p = head;
    node* q = head->next;
    while (q->next != NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    delete(q);
    return head;
}
node* deletionatvalue(node* head,int value){
    node*p = head;
    node* q = head->next;
    while (q->data!=value && q->next!=NULL)
    {
       p=p->next;
      q= q->next;
    }
    if (q->data == value)
    {
        p->next= q->next;
        delete(q);
    }
    return head;
}
int main()
{
    node *head;
    node *second;
    node *third;
    node *fourth;
    node *fifth;

    head = new node();
    second = new node();
    third = new node();
    fourth = new node();
    fifth = new node();

    head->data = 4;
    head->next = second;

    second->data = 8;
    second->next = third;

    third->data = 13;
    third->next = fourth;

    fourth->data = 17;
    fourth->next = fifth;

    fifth->data = 27;
    fifth->next = NULL;
    cout << "linkedlist before deletion\n";
    traversal(head);
    cout << "\nlinkedlist after deletion\n";
    head=deletionatvalue(head,13);
    traversal(head);

    return 0;
}