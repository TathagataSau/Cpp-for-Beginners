#include<iostream>
using namespace std;
class Student{
public:
    string name;
    int rno;
    float marks;
    Student(string n, int r, float m){
        name =n;
        rno = r;
        marks = m;

    }
};

int main(){
    Student s("Tathagata", 21, 9.08);
    /*
    s.name = "Tathagata";
    s.rno = 21;
    s.marks =9.08;
    */
    cout<<s.rno;
}