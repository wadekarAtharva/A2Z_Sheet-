// print name 5time

#include<bits/stdc++.h>
using namespace std;

void printName(int i,int n){
    if(i>n){
        return;
    }
    cout<<"Atharva"<<i<<endl;
    printName(i+1,n);
}


int main(){
    int n;
    cin>>n;
    printName(1,n);
return 0;

}