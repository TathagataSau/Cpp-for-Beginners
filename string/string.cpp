#include<iostream>
using namespace std;
int main(){
    string s;
    string n;
    cout<<"Enter a String:";
    getline(cin,s);
    cout<<s<<endl;
    s.push_back('T');
    cout<<"after push_back:"<<s<<endl;
    s.pop_back();
    cout<<"after pop:"<<s<<endl;
    cout<<"now enter what do you wanna append: ";
    getline(cin,n);
    
    //s.append(" ");
    s.append(" "+n);
    cout<<"Final: "<<s<<endl;
    cout<<s<<" "<<s.length()<<endl;
    s.clear();
    cout<<s<<" "<<s.length();
    return 0;
}