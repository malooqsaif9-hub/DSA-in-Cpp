#include <iostream>
using namespace std;

void printarray(int *array, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " \n";
    }
    cout << "\n";
}

int insertionsort(int *array, int n)
{
    int key, j;
    for (int i = 1; i <= n - 1; i++)
    {
        key = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}

int main()
{
    int array[] = {5, 98, 67, 3, 2, 56, 1};
    int n = 7;
    printarray(array, n);
    insertionsort(array, n);
    printarray(array, n);
    return 0;
}