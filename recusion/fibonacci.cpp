#include<iostream>
using namespace std;

int fibb(int n){
    
    if (n==1 or n==2) return 1; 
    return (fibb(n-1)+fibb(n-2));
    

}
int main(){
    int n;
    cout<<"Enter a number for fibonacci:";
    cin>>n;
    cout<<"fibonacci series:";
    for (int i =1;i<n; i++){
        cout<<fibb(i)<<" ";
    }
    cout<<endl;
    return 0;
}