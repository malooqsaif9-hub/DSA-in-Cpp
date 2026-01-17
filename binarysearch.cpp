#include <iostream>
using namespace std;

int binarysearch(int arr[],int size,int element){
    int low = 0;
    int high = size - 1;
    while (low<=high)
    {
    int mid = (low + high)/2;

   if (arr[mid]==element)
   {
    return mid;
   }
   if (arr[mid]<element)
   {
    low = mid+1;
   }
   else{
    high = mid-1;
   }
}
    return -1;

}

int main() {
    int arr[]={1,4,6,8,9,23,100,200,300,400};
    int size = sizeof(arr)/sizeof(arr[0]);
    int element = 300;
    int result = binarysearch( arr, size, element);
    if (result == -1)
    {
        cout<<"element not found"<<endl;
    }
    else{
        cout<<"element found"<<endl;
    }
    
    return 0;
}