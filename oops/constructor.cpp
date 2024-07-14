#include<iostream>
using namespace std;
class rectangle{
    public:
    int l;
    int b;

//default constructor
    rectangle(){
        l = 0;
        b = 0;
    }
//parameterised constructor
    rectangle(int x, int y){
        l = x;
        b = y;
 }
//copy constructor
rectangle(rectangle& r){
    l = r.l;
    b = r.b;

}

};

int main(){
rectangle r1(2,3);
cout<<r1.l<<" "<<r1.b<<endl;
rectangle r2(3,4);
cout<<r2.l<<" "<<r2.b<<endl;

rectangle r3 = r2;
cout<<r3.l<<" "<<r3.b;
    return 0;
}