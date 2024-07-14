#include<iostream>
using namespace std;
int main(){
    int arr[5], nums[7] = {1,2,3,3,2,1,5};
    for (int i=0;i<=4;i++){
        cout<<"enter the number "<<i<<" element:";
        cin>>arr[i];
    }
    for (int i=0; i<=4;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"nums:";
    for( int i=6;i>=0;i--){
        cout<<nums[i]<<" ";
    }
    return 0;
}
