#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    
    int arr[] = {3,1,2,-55,6,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;

    //insertion sort
    for(int i=1;i<n;i++){
        int j = i;
        while(j>=1){
            if(arr[j]>= arr[j-1]) break;
            else swap(arr[j], arr[j-1]);
            j--;
        }

    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}