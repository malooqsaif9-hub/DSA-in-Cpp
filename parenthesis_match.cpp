#include <iostream>
using namespace std;
struct stack
{
    int size;
    int top;
    char *arr;
};

int isfull(stack *ptr){
    if (ptr->top == ptr->size-1)
    {
        return 1;
    }
    return 0;
}
int isempty(stack *ptr ){
    if (ptr->top==-1)
    {
       return 1;
    }
    return 0;
}
int push(stack* ptr,char val){
    if (isfull(ptr))
    {
       return 1;
    }
    ptr->top++;
    ptr->arr[ptr->top] = val;
    return 0;
}
int pop(stack* ptr){
    if (isempty(ptr))
    {
       return 1;
    }
    char val = ptr->arr[ptr->top];
    ptr->top--;
    return val;

}
int parenthesis( const char *exp) {
   stack *sp = new stack();
   sp->size =100;
   sp->top=-1;
   sp ->arr = new char[sp->size];

   for (int i = 0; exp[i]!='\0'; i++)
   {
    if (exp[i]=='(')
    {
        push(sp,'(');
    }
    else if (exp[i]==')')
    {
        if (isempty(sp))
        {
           return 0;
        }
        pop(sp);
    }
    
   }
   if (isempty(sp))
   {
    return 1;
   }
   return 0;

}

int main() {
   const char *exp = "((8)*(9))";

    if (parenthesis(exp))
    {
        cout<<"parenthes is matching or exp is balanced";
    }
    else{
        cout<<"parenthesis is not matching or exp is unbalanced";
    }
    return 0;
}