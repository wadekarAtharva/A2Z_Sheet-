#include<bits/stdc++.h>
using namespace std;

// void printNumber(int i,int n){
//     if(i<1){
//         return;
//     }
//     cout<<i<<endl;
//     printNumber(i-1,n);
// }

void printNumber(int n){
    if(n<1){
        return;
    }
    cout<<n<<endl;
    printNumber(n-1);

}

int main(){
int n=3;
printNumber(3);
return 0;

}