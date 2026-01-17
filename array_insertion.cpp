#include <iostream>
using namespace std;
void traversal(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

int insertatind(int arr[], int element, int capacity, int size, int index)
{
    if (size >= capacity)
    {
        return -1;
    }

    else
    {
        for (int i = size - 1; i >= index; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[index] = element;
    }
    return 0;
}

int main()
{
    int arr[20]={2,5,6,7,8,9,19,8,43,12};
    int size = 10, element = 45, index = 3, capacity = 20;

    insertatind(arr, element, capacity, size, index);
    size += 1;
    traversal(arr, size);

    return 0;
}