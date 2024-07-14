#include<iostream>
using namespace std;
class sum{
public:
    void add(int x, int y){
        int sum = x+y;
        cout<<"two"<<sum<<endl;
    }
    void add(int x, int y, int z){
        int sum = x+y+z;
        cout<<"three"<<sum<<endl;

    }
    void add(float x, float y){
        float sum = x+y;
        cout<<sum<<endl;
    }
};
int main(){
    sum s;
    s.add(2,3);
    s.add(3,4,5);
    s.add(float(2.1),float(4.0));

}