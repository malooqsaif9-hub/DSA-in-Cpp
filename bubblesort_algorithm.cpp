#include <iostream>
using namespace std;

void dispaly(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubblesort(int arr1[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        cout << "working on pass number " << i + 1 << endl;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr1[j] > arr1[j + 1])
            {
                temp = arr1[j];
                arr1[j] = arr1[j + 1];
                arr1[j + 1] = temp;
            }
        }
    }
}

void adaptive_bubblesortalgo(int arr2[], int n)
{
    int temp;
    bool swapped;

    for (int i = 0; i < n - 1; i++)
    {
        cout << "working on pass number " << i + 1 << endl;
        swapped = false;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr2[j] > arr2[j + 1])
            {
                temp = arr2[j];
                arr2[j] = arr2[j + 1];
                arr2[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped)
        {
            return;
        }
    }
}

int main()
{
    int arr1[] = {5, 98, 67, 3, 2, 56, 1};
    int arr2[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    dispaly(arr1, n);
    bubblesort(arr1, n);
    dispaly(arr1, n);
    adaptive_bubblesortalgo(arr2, n);
    dispaly(arr2, n);

    return 0;
}