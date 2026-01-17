#include <iostream>
using namespace std;

int deletion(int arr[],int size,int index){
    for (int i = index; i < size-1; i++)
    {
        arr[i]=arr[i+1];
    }
    
}

int main() {
    int arr[20]={7,8,12,77,88};
    int size = 5,index=3,capacity=20;
    deletion(arr,size,index);
    size-=1;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}