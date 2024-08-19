#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void Frequency(int arr[], int n)
{
    unordered_map<int, int> map;

    for (int i = 0; i < n; i++)
    {
        map[arr[i]]++;
    }

    int maxfreq = 0, minfreq = n;
    int maxEle = 0, minEle = 0;

    for (auto it : map)
    {
        int count = it.second;
        int element = it.first;

        if (count > maxfreq)
        {
            maxEle = element;
            maxfreq = count;
        }

        if (count < minfreq)
        {
            minEle = element;
            minfreq = count;
        }
    }
    cout << "The highest frequency element is: " << maxEle << "\n";
    cout << "The lowest frequency element is: " << minEle << "\n";
}

int main()
{
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    Frequency(arr, n);

    return 0;
}