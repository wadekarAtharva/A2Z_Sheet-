#include <bits/stdc++.h>
using namespace std;

int secondlargest(int arr[], int n)
{
    int largest = arr[0];
    int slargest = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            slargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > slargest)
        {
            slargest = arr[i];
        }
    }
    return slargest;
}

int secondSmallest(int arr[], int n)
{
    int smallest = arr[0];
    int ssmallest = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            ssmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] != smallest && arr[i] < ssmallest)
        {
            ssmallest = arr[i];
        }
    }
    return ssmallest;
}
int main()
{
int arr1[] = {1,2,3,7,7,5};
  int n = 6;
  int max = secondlargest(arr1, n);
  int min=secondSmallest(arr1,n);
  cout << "The second largest element in the array is: " << max << endl;

  cout << "The second smallest element in the array is: " << min << endl;
    return 0;
}