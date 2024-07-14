#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
/*
int main(){
    int n = 12345;
    string s = to_string(n);
    reverse(s.begin(),s.end());
    int m = stoi(s);
    cout<<m+1;

}
*/
int main(){
    int n;
    cin>>n;
    int rev = 0;
    while(n>0){
        int ld = n%10;
        rev = (rev*10)+ld;
        n = n/10;
    }
    cout<<rev;
    return 0;
}