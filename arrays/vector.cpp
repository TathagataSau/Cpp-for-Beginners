#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n=6;
    //cout<<"enter the array size:";
    //cin>>n;
    vector<int>arr(n,7);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
    cout<<arr.size()<<endl;
    arr.push_back(10);
    cout<<"next size:"<<arr.size()<<endl;
    cout<<arr.capacity();
}