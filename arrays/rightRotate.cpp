#include<bits/stdc++.h>
using namespace std;

void rightRotate(int arr[],int n){
    int temp=arr[n-1];

    for (int i = n-1; i > 0; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
}

int main(){
int arr[5]={1,2,3,4,5};
int n=5;

rightRotate(arr,n);
for (int i = 0; i < n; i++)
{
    cout<< arr[i]<<" ";
}


return 0;

}