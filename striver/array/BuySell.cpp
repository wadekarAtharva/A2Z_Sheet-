#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int mini = prices[0];
    int maxProfit = 0;
    int n = prices.size();

    for (int i = 0; i < n; i++)
    {
        int cost = prices[i] - mini;
        maxProfit = max(maxProfit, cost);
        mini = min(mini, prices[i]);
    }
    return maxProfit;
}

int main()
{
    vector<int> arr = {7, 1, 5, 3, 6, 4};
    int maxPro = maxProfit(arr);
    cout << "Max profit is: " << maxPro << endl;
    return 0;
}