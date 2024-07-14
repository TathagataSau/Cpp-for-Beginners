#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    /*double price = 99.99;
    float interest_rate = 3.67f;
    long file_size = 90000L;
    char letter = 'a';
    bool isValid = false;
    auto file = 90000;
    auto filee = 90000L;
    */
   /*
   int number;
   number = {}; // initialization with 0
   cout << number;
    */
    //random value generator <cstdlib>
    
    srand(time(0));

    int number = rand() % 10;
    cout<<number;

    return 0;
}