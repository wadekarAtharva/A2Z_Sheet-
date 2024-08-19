#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[],int n,int num){

    for (int i = 0; i < n; i++)
    {
        if (arr[i]==num)
        {
            return i;
        }
        
    }
    return -1;
    
}

int main(){
int arr[7]={5,9,6,7,2,8,3};
int n=7;
int num=6;
cout<<linearSearch(arr,n,num);
return 0;

}