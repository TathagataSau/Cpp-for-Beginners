#include<iostream>
using namespace std;
void swap(int*a, int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x = 3;
    int y = 4;
    cout<<x<<" "<<y<<endl;
    swap(&x, &y);
    return 0;

}