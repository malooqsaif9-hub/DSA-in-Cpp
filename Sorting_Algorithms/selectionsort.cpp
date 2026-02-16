#include <iostream>
using namespace std;

void display(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

void selection(int arr[],int n){
    for (int i = 0; i < n-1; i++)
    {
        int min = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[min])
            {
                min = j;
            }
            
        }
        if (min!=i)
        {
            int temp = arr[i];
            arr[i]=arr[min];
            arr[min]= temp;
            
        }
        
    }
    
}

int main() {
    int arr[]={7,5,4,2};
    int n = 4;
    selection(arr,n);
    display(arr,n);
    return 0;
}