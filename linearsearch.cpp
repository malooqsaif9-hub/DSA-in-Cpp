#include <iostream>
using namespace std;
int linearsearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 4, 6, 8, 9, 23, 100, 300, 200, 400};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element = 2;
    linearsearch(arr, size, element);
    int result = linearsearch(arr, size, element);
    if (result == 1)
        cout << "element found";
    else
    {
        cout << "element not found";
    }

    return 0;
}