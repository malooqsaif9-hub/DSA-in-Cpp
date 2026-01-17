#include <iostream>
using namespace std;
struct stack
{
    int size;
    int top;
    int *arr;
};
int isfull(stack*ptr){
    if (ptr->top==ptr->size-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int isempty(stack*ptr){
    if (ptr->top== -1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

 int push(stack*ptr,int val){
    if (isfull(ptr))
    {
        cout<<"stack overflow:value "<<val<<" cannot be pushed\n";
        return 1;
    }
    ptr->top++;
    ptr->arr[ptr->top]=val;
   return 0;
 }
int pop(stack*ptr){
    if(isempty(ptr)){
        cout<<"stack underflow:";
        return -1;
    }
    int val = ptr->arr[ptr->top];
    ptr->top--;
    cout<<"popped "<<val<<" from the stack\n";
    return val;
}
int peek(stack*sp,int i){
    int arrayind = sp->top-i+1;
    if (arrayind<0)
    {
       cout<<"not a valid position"<<endl;
       return -1;
    }
    return sp->arr[arrayind];
}
int stacktop(stack*sp){
    return sp->arr[sp->top];

}
int stackbottom(stack*sp){
    return sp->arr[0];
}
int main(){
    stack*sp=new stack;
    sp->size=20;
    sp->top=-1;
    sp->arr=new int[sp->size];
    cout<<"stack has been created succesfully\n";
    push(sp,4);
    push(sp,6);
    push(sp,8);
    push(sp,9);
    push(sp,57);
    push(sp,79);
    push(sp,99);
    push(sp,69);
    push(sp,100);
    push(sp,467);
    push(sp,1);
    //push(sp,250); stack overflow condition

    pop(sp);
    pop(sp);
    pop(sp);
    pop(sp);
    pop(sp);
    
    // for (int j = 1; j<= sp->top+1; j++)
    // {
    //     cout<<"element found at position "<<j<<" is "<<peek(sp,j)<<endl;
    // }
    cout<<"the topmost element of the stack is"<<stacktop(sp)<<endl;
    cout<<"the bottom element of the stack is"<<stackbottom(sp);


    return 0;
}