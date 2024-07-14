#include<iostream>
using namespace std;
int main(){
    /*
    for( int i = 0; i<=100; i++){
        if (i%2 == 0){
            cout<<i<<" "<<endl;
        }  
    }
    */
   int n;
   cout<<"enter the number : ";
   cin>>n;
   bool flag = true;
   for(int i = 2; i<= n/2; i++){
    if (n%i == 0){
        flag = false; // false means composite
        break;
    }
    
    
   }
   if(flag == true) cout<<"Prime";
   else cout<<"composite";
    return 0;
}