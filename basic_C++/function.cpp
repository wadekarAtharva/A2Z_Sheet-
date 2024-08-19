#include<bits/stdc++.h>
using namespace std;

// void
// return
// para
// non-para

void printName(string name){
    cout<<"Hey "<<name<<endl;
}

int sumNumber(int num1,int num2){
    int sum=num1+num2;
    return sum;
}

int main(){
    string name;
    // cin>>name;
    // printName(name);

    int n1,n2;
    cin>>n1>>n2;

    int ans=sumNumber(n1,n2);
    cout<<ans;
return 0;

}