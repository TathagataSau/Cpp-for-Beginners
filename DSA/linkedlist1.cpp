#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int v){
        val = v;
        this->next = NULL;
    }

};
int main(){
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    a.next = &b;
    b.next = &c;
    c.next =&d;
    //Node* ptr = &b;
    //ptr->val = 70;
    a.next->val = 101;

    
    //cout<<a.next->next->next->val<<endl;
    //cout<<(*((*((*(a.next)).next)).next)).val;
    Node temp = a;
    while(temp.next != NULL){
        cout<<temp.val<<" ";
        temp = *(temp.next);
    }

    return 0;

}