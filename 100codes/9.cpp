#include<bits/stdc++.h>
using namespace std;


int main(){

int num;
cin>>num;
int sum=0;

while (num!=0)
{
    int ld=num%10;
    sum=sum+ld;
    num=num/10;

}
cout<<sum;
return 0;

}