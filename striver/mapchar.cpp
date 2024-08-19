#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

   string s="atharva";

    // precompute
    map<char, int> mpp;
    for (int i = 0; i < 7; i++)
    {
        mpp[s[i]] ++;
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
        char ch;
        cin >> ch;

        // fetch
        cout << mpp[ch] << endl;
    }

    return 0;
}