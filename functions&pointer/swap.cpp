#include<iostream>
using namespace std;
void swap(int& a, int& b){
    int c = a;
     a = b;
     b = c;
}
int main(){
    int a = 2;
    int b = 3;
    cout<<a<<" "<<b<<endl;
    swap(a,b);

    cout<<a<<" "<<b;

}