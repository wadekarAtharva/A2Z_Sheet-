// Greatest of the Three numbers:

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, b, c;

    cin >> a;
    cin >> b;
    cin >> c;

    if ((a > b) && (a > c))
    {

        cout << "Greatest number:" << a;
    }
    else if ((b > a) && (b > c))
    {
        cout << "Greatest number:" << b;
    }
    else
    {
        cout << "Greatest number:" << c;
    }

    return 0;
}