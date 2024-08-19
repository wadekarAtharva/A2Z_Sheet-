#include <bits/stdc++.h>
using namespace std;

void recBubbleSort(int arr[], int n)
{

    // base class
    if (n == 1)
    {
        return;
    }

    for (int j = 0; j <= n - 2; j++)
    {
        if (arr[j] > arr[j + 1])
        {
            swap(arr[j], arr[j + 1]);
        }
    }
    recBubbleSort(arr, n - 1);
}

int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before Using Bubble Sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    recBubbleSort(arr, n);
    cout << "After Using bubble sort: " << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}