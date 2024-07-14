#include <iostream>
using namespace std;
int main(){
    int n;
    int n1;
    char op;
    cout<<"Enter the value of N:";
    cin>>n;
    cout<<"enter another number:";
    cin>>n1;
    cout<<"enter the operator:";
    cin>>op;
    switch(op){
        case '+':
            cout<<n+n1;
            break;
        case '-':
            cout<<n-n1;
            break;
        case '*':
            cout<<n*n1;
            break;
        case '/':
            cout<<n/n1;
            break;
        default:
            cout<<"invalid op";
    }

    //(n%2 == 0)? cout<<"devisible by 2" :cout<<"not divisible by 2";
    /*
    if(n%5 == 0){
        if (n%3 ==0){
            cout<<"divisible by 5 and 3";

        }
        
    } 
    else {
        cout<<"not deivisible by 5 or 3 "<<"wow";
    }
*/
    return 0;
}