#include<bits/stdc++.h>
using namespace std;

void explainPair(){
    pair<int,int>p={1,3}; //single pair

    cout<<p.first<<" "<<p.second<<endl;

    pair<int,pair<int,int>>s={1,{3,4}}; //pair within pair

    cout<<s.first<<" "<<s.second.first<<" "<<s.second.second<<endl;;

    pair<int,int>arr[]={{1,3},{8,58},{9,6},{6,7}};

    cout<<arr[1].second;
}

int main(){

explainPair();
return 0;

}