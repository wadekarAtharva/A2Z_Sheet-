#include<bits/stdc++.h>
using namespace std;


int main(){

string s;
cout<<"Enter a string:";
cin>>s;

int hash[26]={0};
for (int i = 0; i <s.size(); i++)
{
    hash[s[i]-'a']++;
}

int q;
cout<<"Enter Numbers of queries:";
cin>>q;
while (q--)
{
    char c;
    cout<<"Enter Character to count:";
    cin>>c;

    cout<<"Ans:"<<hash[c-'a']<<endl;
}

return 0;

}