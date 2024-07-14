#include<iostream>
using namespace std;

class vehicle{ 
    public:
    vehicle(){
        cout<<"vehicle"<<endl;

    }

};
class tires: public vehicle{
    public:
    tires(){
        cout<<"tires"<<endl;

    }
    
};
int main(){
    tires sc;

}