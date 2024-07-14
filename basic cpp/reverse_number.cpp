#include<iostream>
using namespace std;

int main(){
    int n;
    int remainder=0;
    int rev=0;
    cout<<"enter a number you want to reverse:";
    cin>>n;
    while(n>0){
        remainder = n%10;
        rev *= 10;
        rev +=remainder;
        n /=10;
    }
    cout<<rev;
}