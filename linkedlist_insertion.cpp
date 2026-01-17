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

node *insertionatbegin(node *head, int data)
{
    node *ptr = new node();
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

node* insertatindex(node*head,int data,int index){
    node*ptr = new node();
    node*p = head;
    int i= 0;
    while (i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;

}

node* insertatend(node*head,int data){
    node*ptr=new node();
    ptr->data=data;
    node*p=head;
    while (p->next!=NULL)
    {
      p=p->next;
      
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;

}
 node* insertafternode(node*head,int data,node*prevnode){
    node*ptr=new node();
    ptr->data=data;
    
    ptr->next=prevnode->next;
    prevnode->next=ptr;
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
    fourth->next = NULL;
    
    int data = 56;
    cout<<"linkedlist before insertion"<<endl;
    traversal(head);
    //head = insertionatbegin(head, data);
    //traversal(head);
   // head = insertatindex(head,data,1);
  // head = insertatend(head,data);
   head= insertafternode(head,58,second);
   cout<<"\nlinkedlist after insertion"<<endl;
   traversal(head);
    return 0;
}