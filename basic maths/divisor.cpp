#include <bits/stdc++.h>
#include <vector>
#include <cmath>

using namespace std;

vector<int> findDivisor(int n)
{

    vector<int> divisor;

    int sqrtN = sqrt(n);

    for (int i = 1; i <= sqrtN; i++)
    {
        if (n % i == 0)
        {
            divisor.push_back(i);

            if (n / i != i)
            {
                divisor.push_back(n / i);
            }
        }
    }
    sort(divisor.begin(),divisor.end());
    for (auto it:divisor){
        cout<<it<<" ";
    }
    
}

int main()
{
    int n=36;
    findDivisor(n);
    return 0;
}