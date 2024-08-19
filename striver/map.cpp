#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[7] = {1, 2, 3, 4, 1, 2, 12};

    // precompute
    map<int, int> mpp;
    for (int i = 0; i < 7; i++)
    {
        mpp[arr[i]] ++;
    }

    //ilterate
    for (auto it:mpp)
    {
        cout<<it.first<<"->"<<it.second<<endl;
    }
    
    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;

        // fetch
        cout << mpp[number] << endl;
    }

    return 0;
}