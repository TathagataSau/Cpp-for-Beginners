#include<iostream>
using namespace std;
class rectangle{
    public:
    int l;
    int b;

    rectangle(int x, int y){
        l = x;
        b = y;
    }
    rectangle(rectangle& r){
        l = r.l;
        b = r.b;

    }

    ~rectangle(){
    cout<<endl<<"destructor is called";
}
    
};
int main(){
    rectangle r1(2,3);
    cout<<r1.l<<" "<<r1.b<<endl;
    rectangle r3 = r1;
    cout<<r3.l<<" "<<r3.b;
    
}

