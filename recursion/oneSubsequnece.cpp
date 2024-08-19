#include <bits/stdc++.h>
using namespace std;

bool printS(int ind, vector<int> &ds, int s, int sum, int arr[], int n)
{
    if (ind == n)
    {
        // if conditonn is satisfied return true
        if (s == sum)
        {
            for (auto it : ds)
            {
                cout << it << " ";
            }
            cout << endl; // Print each valid subset on a new line
            return true;
        }
        // conditon not satisfied
        return false; // Ensure the function returns after handling the base case
    }
    // Include the current element in the subset
    ds.push_back(arr[ind]);
    s += arr[ind];
    if (printS(ind + 1, ds, s, sum, arr, n)==true)
    {
        return true;
    }
    s -= arr[ind]; // Backtrack
    ds.pop_back(); // Backtrack

    // Exclude the current element from the subset
    if (printS(ind + 1, ds, s, sum, arr, n)==true)
    {
        return true;
    }

    return false;
}

int main()
{
    int arr[] = {1, 2, 1};
    int n = 3;
    int sum = 2;
    vector<int> ds;
    printS(0, ds, 0, sum, arr, n);
    return 0;
}
