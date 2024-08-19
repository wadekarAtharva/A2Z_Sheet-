#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int printF(int i, int s, int sum, int arr[], int n)
{
    if (i == n)
    {
        // condition satisfied
        if (s == sum)
        {

            return 1;
        }
        else
        {

            // not satisfied
            return 0;
        }
    }

    s += arr[i];

    int l = printF(i + 1, s, sum, arr, n);

    s -= arr[i];

    int r = printF(i + 1, s, sum, arr, n);

    return l + r;
}
int main()
{
    int arr[] = {1, 2, 1};
    int n = 3;
    int sum = 2;

    cout << printF(0, 0, sum, arr, n);
    return 0;
}