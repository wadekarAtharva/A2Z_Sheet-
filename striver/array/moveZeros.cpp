#include <iostream>
using namespace std;

void moveZeros(int arr[], int n)
{
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }

    if (j == -1)
    {
        cout << "no Zero present";
    }
    else
    {
        for (int i = j + 1; i < n; i++)
        {
            if (arr[i] != 0)
            {
                swap(arr[i], arr[j]);
                j++;
            }
        }
    }
cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    moveZeros(arr, n);
    return 0;
}