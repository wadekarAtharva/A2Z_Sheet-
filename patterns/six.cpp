#include<bits/stdc++.h>
using namespace std;

void print(int n){
    for (int i = 0; i < n; i++)
    {
        // space
    for (int j = 0; j < n-i-1; j++)
    {
        cout<<" ";
    }
    // star
    for (int k = 0; k < 2*i+1; k++)
    {
        cout<<"*";

    }

     // space
    for (int l = 0; l< n-i-1; l++)
    {
        cout<<" ";
    }
    cout<<endl;
    }
    
    
    
}

int main(){
    int n;
    // cin>>n;
    print(6);
return 0;

}