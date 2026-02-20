#include <iostream>
using namespace std;

void merge(int arr[], int lb, int mid, int ub) {
    int b[100]; // Temporary array
    int i = lb;
    int j = mid + 1;
    int k = lb;
    
    // Merge smaller elements first
    while (i <= mid && j <= ub) {
        if (arr[i] <= arr[j]) {
            b[k] = arr[i];
            i++;
        } else {
            b[k] = arr[j];
            j++;
        }
        k++;
    }
    
    // Copy remaining elements from left half
    while (i <= mid) {
        b[k] = arr[i];
        i++;
        k++;
    }
    
    // Copy remaining elements from right half
    while (j <= ub) {
        b[k] = arr[j];
        j++;
        k++;
    }
    
    // Copy sorted elements back to original array
    for (int i = lb; i <= ub; i++) {
        arr[i] = b[i];
    }
}

void mergesort(int arr[], int lb, int ub) {
    if (lb < ub) {
        int mid = (lb + ub) / 2;
        mergesort(arr, lb, mid);
        mergesort(arr, mid + 1, ub);
        merge(arr, lb, mid, ub);
    }
}

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = 7;
    mergesort(arr, 0, n - 1);
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}