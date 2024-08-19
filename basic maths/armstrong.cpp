#include<bits/stdc++.h>
using namespace std;

bool armstrong(int n){
    int sum=0;
    int dup=n;
    while (n>0)
    {
        int ld=n%10;
        sum=sum+(ld*ld*ld);
        n=n/10;

    }
    if (sum==dup)
    {
        return true;
    }
    else{
        return false;
    }
    
}

int main(){
int n=371;
if (armstrong(n)){
    cout<<"Armstrong Number";
}
else
{
    cout<<"Not A Armstrong Number";
}


return 0;

}