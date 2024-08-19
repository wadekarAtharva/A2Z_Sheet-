#include<iostream>
#include<bits/stdc++.h>
using namespace std;


bool printF(int i,vector<int>&ds,int s,int sum ,int arr[],int n){
    if (i==n)
    {
        //condition satisfied
        if (s==sum)
        {
            for(auto it:ds){
                cout<<it<<" ";
            }
            cout<<endl;
            return true;
        }

        //not satisfied
        return false;
        
    }

    ds.push_back(arr[i]);
    s+=arr[i];

    if(printF(i+1,ds,s,sum,arr,n)){
        return true;
    }

    s-=arr[i];
    ds.pop_back();

   if(printF(i+1,ds,s,sum,arr,n)){
        return true;
    }

    return false;
}
int main(){
    int arr[]={1,2,1};
    int n=3;
    int sum=2;
    vector<int>ds;
    printF(0,ds,0,sum,arr,n);
return 0;

}