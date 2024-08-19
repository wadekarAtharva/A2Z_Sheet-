#include<bits/stdc++.h>
using namespace std;

bool sortedCheck(int arr[],int n){

    for (int i = 1; i < n; i++)
    {
        if (arr[i]>arr[i-1])
        {
        
        }
        else
        {
            return false;
        }
        
        
    }
    return true;
    
}

int main(){

    int arr[]={2,3,5,7,6,9};
    int n=6;
    if (sortedCheck(arr,n))
    {
        cout<<"Array is sorted";
    }
    else{
        cout<<"Array is not sorted";
    }
    
return 0;

}