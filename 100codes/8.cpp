// C++ Program to Print Prime numbers in a given range

#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if (n<2)
    {
        return false;
    }
    if (n==2)
    {
        return true;
    }
    
    
    for (int i = 2; i < n; i++)
    {
      if (n%i==0)
      {
        return false;
      }
      
       
    }
    
}
int main(){

    int n;
    cin>>n;

    for (int i = 2; i <=n; i++)
    {
       if (isPrime(i))
       {
        cout<<i<<" ";
       }
       
    }
    

   
    
return 0;

}