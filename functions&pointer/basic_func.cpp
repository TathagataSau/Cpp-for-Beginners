#include<iostream>
using namespace std;
int usa(int a,int b){
    cout<<"this is made for USA only:";
    return a+b;
    
}
int india(int a, int b){
    cout<<"this is made for INDIA only:";
     return a-b;
    
}
int main(){
    string country;
    cout<<"youre typring what function to call(usa or india):";
    cin>>country;
    if (country == "usa"){
        cout<<usa(2,3);
        
    }
    else{
        cout<<india(7,8);

    }
}