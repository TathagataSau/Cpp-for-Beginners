#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"provide a number:";
    cin>>n;
    int sum = 0;
    int last_digit;
    while (n>0){
        last_digit= n % 10;
        n /= 10;
        sum += last_digit;
    }
    cout<<"sum of the degits:"<<sum;
    return 0;
}