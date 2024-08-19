#include<iostream>
#include <bits/stdc++.h>

using namespace std;

void leftRotate(int arr[],int n,int k){
    reverse(arr,arr+k);
    reverse(arr+k,arr+n);
    reverse(arr,arr+n);
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    leftRotate(arr, n,3);
    cout << "The array after removing duplicate elements is " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
return 0;

}