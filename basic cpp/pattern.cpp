#include<iostream>
using namespace std;
int main(){
    int r;int c;int i;int j;
    cout<<"number of rows:";
    cin>>r;
    cout<<"number of columns:";
    cin>>c;
    for(i = 1; i<=r;i++){
        for(j = 1; j<= c;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}