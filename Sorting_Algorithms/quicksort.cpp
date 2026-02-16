#include <iostream>
using namespace std;

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int partition(int arr[], int lb, int ub)
{
    int pivot = arr[lb];
    int start = lb + 1;
    int end = ub;

    while (start <= end)
    {
        while (arr[start] <= pivot )
            start++;

        while (arr[end] > pivot)
            end--;

        if (start < end)
        {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
        }
    }

    // place pivot at correct position
    int temp = arr[lb];
    arr[lb] = arr[end];
    arr[end] = temp;

    return end;
}

void quicksort(int arr[], int lb, int ub)
{
    if (lb < ub)
    {
        int loc = partition(arr, lb, ub);
        quicksort(arr, lb, loc - 1);
        quicksort(arr, loc + 1, ub);
    }
}

int main()
{
    int arr[] = {17,9,22,31,7,12,10,21,13,29,18,20,11};
    int n = 13;

    quicksort(arr, 0, n - 1);
    display(arr, n);

    return 0;
}