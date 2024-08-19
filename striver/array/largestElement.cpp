#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// bruteForce
/*void largestElement(int arr[],int n){
    sort(arr,arr+n);

    cout<<"Largest:"<<arr[n-1];

}
*/

// optimal
void largestElement(int arr[],int n){
    int largest =arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>largest)
        {
            largest=arr[i];
        }
        
    }
    
    cout<<"Largest Element:"<<largest;
}

int main(){
    int arr[6]={5,8,9,6,7,2};
    //largestElement(arr,6);-----> O(NlogN) bruteforce

    largestElement(arr,6);



return 0;

}