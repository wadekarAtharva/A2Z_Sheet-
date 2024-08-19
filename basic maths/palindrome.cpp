#include<bits/stdc++.h>
using namespace std;

bool palindrome(int n){
    int dup=n;
    int revNumber=0;
    int ld;

    while (n>0)
    {
        ld=n%10;
        revNumber=(revNumber*10)+ld;

        n=n/10;

    }
    if (dup==revNumber)
    {
        return true;

    }
    else{
        return false;
    }
    
    
}

int main(){
    int n=7887;
    if (palindrome(n)) {
        cout << n<< " is a palindrome." << endl;
    } else {
        cout << n << " is not a palindrome." << endl;
    }
return 0;

}