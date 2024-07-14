#include<iostream>
using namespace std;
int main(){
    int arr[4]={1,2,3,4};
    int n = sizeof(arr)/4;
    int b[n];
    for (int i=0;i<sizeof(arr)/4;i++){
        int j = n-1-i;
        b[i] = arr[j];
    }
    for (int i = 0; i<n;i++){
        cout<<b[i]<<" ";
    }
}