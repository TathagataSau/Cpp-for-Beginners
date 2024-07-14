#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    
    int arr[] = {3,1,3,4,5,3,7,1,2,4};
    int n= sizeof(arr)/4;
    sort(arr,arr+n,greater<int>());
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}