#include <iostream>
using namespace std;

struct stack
{
    int size;
    int top;
    int *arr;
};

int isempty(stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    return 0;
}

int isfull(stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    return 0;
}

int main()
{
    // struct stack s;
    // s.size=5;
    // s.top=-1;
    // s.arr = new int();
// allocating memory for stack structure
     stack *s=new stack;
    s->size = 5;
    s->top = -1;
    //allocating  array
    s->arr = new int[s->size];

    s->arr[0]=7;
    s->top++;
    s->arr[1]=8;
    s->top++;
    s->arr[2]=10;
    s->top++;
    s->arr[3]=21;
    s->top++;
    s->arr[4]=89;
    s->top++;

    if (isempty(s))
    {
        cout << "stack is empty\n";
    }
   int result=isfull(s);
   if (result==1)
   {
    cout<<"stack is full";
   }
  


    return 0;
}