#include<iostream>
using namespace std;

bool checkSorted(int arr[],int n){
    for (int i = 1; i < n; i++)
    {
        if (arr[i]>arr[i-1])
        {
            
        }
        else{
            return false;
        }
    }
    return true;
    
}

int main(){
    int arr[5]={1,2,8,4,5};

    int ans=checkSorted(arr,5);
    if (ans==1)
    {
        cout<<"Array is sorted";
    }
    else{
        cout<<"Array is not sorted";
    }
    
return 0;

}