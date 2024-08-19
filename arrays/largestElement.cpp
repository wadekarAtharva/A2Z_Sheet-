#include<bits/stdc++.h>
using namespace std;

int largeElement(int arr[],int n){
    int largest=arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>largest)
        {
            largest=arr[i];

        }

        
    }
    return largest;
}

int main(){
int arr1[] = {2,5,1,3,0};
  int n = 5;
  int max = largeElement(arr1, n);
  cout << "The largest element in the array is: " << max << endl;
 
  int arr2[] =  {8,10,5,7,9};
  n = 5;
  max = largeElement(arr2, n);
  cout << "The largest element in the array is: " << max<<endl;
return 0;

}