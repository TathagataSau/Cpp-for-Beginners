#include<iostream>
using namespace std;
int main(){
    
    int arr[7] = {4,1,5,22,3,5,3};
    //int max=arr[0];
    int mx = INT_MIN;
    /*
    for (int i=1; i<7;i++){
        if (arr[i]>max) max = arr[i];
        continue;

    }
    cout<<"max"<<max<<endl;
    cout<<INT_MIN<<endl;
    cout<<INT_MAX;
    */

   for(int i=0;i<sizeof(arr)/4;i++){
    mx =max(mx,arr[i]);
   }
   cout<<mx<<endl;
   int smx = INT_MIN;
   for (int i=0;i<sizeof(arr)/4;i++){
    if (arr[i]!=mx) smx = max(smx,arr[i]);
   }
   cout<<"second max:"<<smx;
    return 0;
}
