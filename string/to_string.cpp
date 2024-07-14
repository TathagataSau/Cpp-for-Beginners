#include<iostream>
using namespace std;
int main(){
    int x =1526272;
    string s = to_string(x);
    cout<<"length:"<<s.length()<<endl;
    int p = stoi(s);
    cout<<"length int:"<<p+1;
    cout<<sizeof(p);
}