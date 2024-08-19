#include<bits/stdc++.h>
using namespace std;


void moveZero(int arr[],int n)
{
    int j=-1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==0)
        {
            j=i;
            break;
        }

        
    }
     
if (j!=-1)
{
    for (int i = j+1; i < n; i++)
    {
        if (arr[i]!=0)
        {
            swap(arr[i],arr[j]);
            j++;
        }
        
    }
}

    
    
    
}
int main(){
int arr[7]={1,2,2,4,0,6,5};
int n=7;
moveZero(arr,n);
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}

return 0;

}