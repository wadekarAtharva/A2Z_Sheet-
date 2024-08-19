#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void rightRotate(int arr[],int n,int k){
    k=k%n;
    for (int i = 0; i < n; i++)
    {
        if(i<k){
            cout<<arr[n+i-k]<<" ";

        }
        else{
            cout<<arr[i-k]<<" ";
        }
    }
    
}

int main(){
int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    rightRotate(arr, n,2);
   
return 0;

}