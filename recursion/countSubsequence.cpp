#include <bits/stdc++.h>
using namespace std;

int printS(int ind, int s, int sum, int arr[], int n)
{
    if (ind == n)
    {
        // if conditonn is satisfied return true
        if (s == sum)
        {
            
            return 1;
        }
        // conditon not satisfied
        return 0; // Ensure the function returns after handling the base case
    }
    // Include the current element in the subset
    // ds.push_back(arr[ind]);
    s += arr[ind];
    int l=printS(ind + 1, s, sum, arr, n);

    s -= arr[ind]; // Backtrack
    // ds.pop_back(); // Backtrack

    // Exclude the current element from the subset
   int r=printS(ind + 1, s, sum, arr, n);

    return l+r;
}

int main()
{
    int arr[] = {1, 2, 1};
    int n = 3;
    int sum = 2;
    cout<<printS(0, 0, sum, arr, n);
    return 0;
}
