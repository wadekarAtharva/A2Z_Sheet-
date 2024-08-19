#include<bits/stdc++.h>
using namespace std;

int removeDuplicate(int arr[],int n){

    int i=0;
    for (int j = 1; j < n; j++)
    {
        if (arr[i]!=arr[j])
        {
            arr[i+1]=arr[j];
            i++;
        }
        
    }
    return i+1;
    
}

int main(){
    int arr[]={1,1,2,2,3,3};
    int n=6;
    int ans=removeDuplicate(arr,n);
    cout<<"The size of Non Duplicate array is "<<ans;
return 0;

}