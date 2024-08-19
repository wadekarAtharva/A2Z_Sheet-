#include<bits/stdc++.h>
using namespace std;


int main(){
int age;
// cout<<"Enter your age:";
// cin>>age;

// if(age<18){
//     cout<<"Your not an Adult";

// }
// else{
//     cout<<"Your an Adult";
// }


// 2nd Problem

int marks;
cout<<"Enter your marks";
cin>>marks;

if(marks>=80 && marks<=100){
    cout<<"You got A";
}
else if(marks>=60 && marks<=79){
    cout<<"You got B";
}
else if(marks>=50 && marks<=59){
    cout<<"You got C";
}else if(marks>=45 && marks<=49){
    cout<<"You got D";
}else if(marks>=25 && marks<=44){
    cout<<"You got E";
}else {
    cout<<"You got F";
}


return 0;

}