#include<iostream>
using namespace std;

class fruit{
public:
    string name;
    string color;

};

int main(){
    fruit apple;
    apple.name = "Apple";
    apple.color = "red";
    cout<<apple.name<<" "<<apple.color<<endl;

    fruit *mango = new fruit;
    mango ->color = "yellow";
    mango ->name = "Mango";

    cout<<mango->name<<" "<<mango->color;

    return 0;
}