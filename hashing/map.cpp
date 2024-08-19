#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size:";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    // to iterate
    for (auto it : mpp)
    {
        cout<<it.first<<"---->"<<it.second<<endl;
    }

    int q;
    cout<<"Enter numbers of queries:";
    cin>>q;
    while (q--)
    {
        int number;
        cout<<"Enter number to find value:";
        cin>>number;

        cout<<mpp[number]<<endl;
    }
    

    return 0;
}