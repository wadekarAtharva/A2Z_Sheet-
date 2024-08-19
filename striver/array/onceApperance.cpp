#include<iostream>
using namespace std;


int onceApperance(int arr[],int n){

    int xor1=0;
    for (int i = 0; i < n; i++)
    {
        xor1=xor1^arr[i];
    }
    return xor1;
    

}

int main(){
int arr[5]={1,1,2,3,3};
 int n = sizeof(arr) / sizeof(arr[0]);
 cout<<"The Number that appears once:"<<onceApperance(arr,n);
return 0;

}