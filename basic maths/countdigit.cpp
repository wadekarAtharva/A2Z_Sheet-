#include<bits/stdc++.h>
using namespace std;

int coutDigit(int n){
    int lastdigit;
    int cnt=0;
    while (n!=0)
    {
     lastdigit=n%10;
     cnt++;
     n=n/10;   
    }
    return cnt;
}

int main(){
    int num=7789;
    int ans=coutDigit(num);

    cout<<"Number of Digit:"<<ans;
return 0;

}