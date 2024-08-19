#include <bits/stdc++.h>
using namespace std;

vector<int> sortedUnion(vector<int> a, vector<int> b){
    int n1=a.size();
    int n2=b.size();

    set<int>st;
    for (int i = 0; i < n1; i++)
    {
        st.insert(a[i]);
    }

    for (int i = 0; i < n2; i++)
    {
        st.insert(b[i]);
    }

    vector<int>temp;
    for (auto it:st)
    {
        temp.push_back(it);
    }
    
    for (int i = 0; i < temp.size(); i++)
    {
        cout<<temp[i]<<" ";
    }
    ;
}

    int main()
{
    vector<int>a={1,2,2,3,3,4,4};
    vector<int>b={5,6,6,7,8};
    sortedUnion(a,b);



    return 0;
}