#include<iostream>
using namespace std;
void change(int arr[]){
    arr[0] = 9;
}
int main(){
    int arr[3]={2,3,4};
    change(arr);
    for (int i=0;i<=2;i++){
        cout<<arr[i]<<" ";
    }

}