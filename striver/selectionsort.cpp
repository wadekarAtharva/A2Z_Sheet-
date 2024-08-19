#include<iostream>
using namespace std;

void selectionSort(int arr[],int n){
    for (int i = 0; i <=n-2; i++)
    {
        int minIndex=i;
        for (int j = i; j <=n-1; j++)
        {
            if (arr[j]<arr[minIndex])
            {
                minIndex=j;
            }
        }
            swap(arr[minIndex],arr[i]);
        
    }
    
}

int main(){
    int arr[6]={9,46,25,78,13,20};
    selectionSort(arr,6);
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    
return 0;

}