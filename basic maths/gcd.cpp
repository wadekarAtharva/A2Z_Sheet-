#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    while (a>0 && b>0)
    {
        if(a>b){
            a=a%b;

        }
        else
        {
            b=b%a;
        }
        
    }
    if (a==0)
    {
        return b;
    }
    else{
        return a;
    }
    
    
}

int main(){
    int a=9;
    int b=12;

   int ans= gcd(a,b);
    cout<<ans;
return 0;

}