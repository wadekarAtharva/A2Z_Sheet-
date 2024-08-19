#include<iostream>
using namespace std;
//O(n+n)=O(2N)
void secondlargest(int arr[],int n){
     int largest =arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>largest)
        {
            largest=arr[i];
        }
        
    }

    int secondlargest=-1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>secondlargest && arr[i]!=largest)
        {
            secondlargest=arr[i];
        }

        
    }
    cout<<"Second Largest:"<<secondlargest;
    
}

int main(){
int arr[6]={5,8,9,6,7,2};


    secondlargest(arr,6);
return 0;

}