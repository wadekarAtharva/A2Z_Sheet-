#include<bits/stdc++.h>
using namespace std;

int secondlargest(int arr[],int n){

    int largest=arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i]>largest)
        {
            largest=arr[i];
        }
    }

    int slargest=-1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>slargest && arr[i]!=largest)
        {
            slargest=arr[i];
        }
        
    }
    return slargest;
    
}

int main(){
int arr1[] = {2,5,1,3,0};
  int n = 5;
  int max = secondlargest(arr1, n);
  cout << "The second largest element in the array is: " << max << endl;
return 0;

}