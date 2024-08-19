// Sum of First N Natural numbers

#include <bits/stdc++.h>
using namespace std;

void sum(int i, int current_sum) {
    if (i < 1) {
        cout << current_sum;
        return;

    }
    current_sum+=i;
    sum(i - 1, current_sum);
}

int main()
{
    int n;
    // cin >> n;
    // int sum=0;
    // for (int i = 1; i <=n; i++)
    // {
    //     sum=sum+i;
    // }

    // cout<<sum;
    
    sum(5,0);
    return 0;
}


// recursion

