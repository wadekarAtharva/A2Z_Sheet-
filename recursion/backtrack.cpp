#include<bits/stdc++.h>
using namespace std;

void printNumber(int i,int n){
    if (i<1)
    {
        return;


    }

    printNumber(i-1,n);
    cout<<i<<endl;
    
}

int main(){
int n=3;
printNumber(3,3);
return 0;

}