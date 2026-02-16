#include <iostream>
using namespace std;

 void maxheapify(int arr[],int n,int i){
    int largest = i;
    int l = 2*i+1;
    int r = 2*i+2;
    
    // Compare left child with largest
    if (l < n && arr[l] > arr[largest])
        largest = l;
    
    // Compare right child with largest
    if (r < n && arr[r] > arr[largest])
        largest = r;
    
    // If largest is not root, swap and recursively heapify
    if (largest!=i)
    {
        swap(arr[i],arr[largest]);
        maxheapify(arr,n,largest);
    }
    
 }

 void heapsort(int arr[],int n){

    for (int i = n/2-1; i >= 0; i--)
    {
        maxheapify(arr,n,i);
    }
    
    for (int  i = n-1; i > 1; i--)
    {
           swap(arr[0],arr[i]);
           maxheapify(arr,i,0);
    }
    
 }

int main() {
    int arr[]={12,11,13,5,6,7};
    int n = sizeof (arr)/sizeof(arr[0]);

    heapsort(arr,n);
     for (int i = 0; i < n; i++)
     {
        cout<<arr[i]<<" ";
     }
     
    return 0;
}