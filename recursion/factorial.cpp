#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if (n==0)
    {
        return 1;
    }

    return n * factorial(n-1);

    
}

int main(){
    int n=3;
    int ans=factorial(n);
    cout<<ans;
return 0;

}